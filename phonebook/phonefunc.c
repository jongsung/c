#include "common.h"
#include "phonedata.h"
#include "phonefunc.h"

#define LIST_NUM    100

int numofdata = 0;
//phonedata phonelist[LIST_NUM];
phonedata *phonelist[LIST_NUM];

void InputPhoneData(void)
{
	int i=0;
    //phonedata inputdata;
	phonedata *pData;
	pData = (phonedata *) malloc(sizeof(phonedata));
	if(pData == NULL)
	{
		printf("malloc failed\n");
		return;
	}

    if(numofdata >= LIST_NUM)
    {
        printf("esceed max input\n");
        return;
    }

    fputs("input name:", stdout);
    //gets(inputdata.name);
	gets(pData->name);

    fputs("input number:", stdout);
	//gets(inputdata.phonenum);
	gets(pData->phonenum);

	/* compare to old data */
	for(i=0; i<numofdata; i++)
	{
		if((strcmp(phonelist[i]->name, pData->name) == 0) && 
			(strcmp(phonelist[i]->phonenum, pData->phonenum) == 0))
		{
			printf("input data conflict, name=%s, phone=%s\n", pData->name, pData->phonenum);
			free(pData);
			getchar();
			return;
		}
	}

    //phonelist[numofdata] = inputdata;
	phonelist[numofdata] = pData;
    numofdata++;

    printf("%s]\n", __FUNCTION__);
    //getchar();
}


void ShowAllData(void)
{
    int i = 0;
    
    for(i=0; i<numofdata ; i++)
    {
#if 0
        printf("data[%d]\n", i);
        printf("name: %s\n", phonelist[i].name);
        printf("phone: %s\n", phonelist[i].phonenum);
#else
        ShowPhoneInfo(phonelist[i]);
#endif
    }

    getchar();
}


void SearchPhoneData(void)
{
	int i;
	int searchStatus = 0;
	char tmpName[NAME_LEN];
	
	fputs("Input Search Name:", stdout);
	gets(tmpName);

	for(i=0; i<numofdata ; i++)
	{
		//if(strcmp(phonelist[i].name, tmpName) == 0)
		if(strcmp(phonelist[i]->name, tmpName) == 0)
		{
			ShowPhoneInfo(phonelist[i]);
			//fputs("Search founded !", stdout);
			//getchar();
			searchStatus = 1;
			//return;
		}
	}

	if(searchStatus == 1)
	{
		fputs("Search ok !", stdout);
	}
	else
	{
		fputs("No Search result", stdout);
	}

	getchar();
}


void DeletePhoneData(void)
{
	int i, j;
	char tmpName[NAME_LEN];

	int idxofMatchingData[LIST_NUM];
	int matchedCount = 0;
	int selection = 0;
	int delIdx = 0;

	fputs("Input Delete Name:", stdout);
	gets(tmpName);

#if 0
	for(i=0 ; i<numofdata ; i++)
	{
		//if(strcmp(phonelist[i].name, tmpName) == 0)
		if(strcmp(phonelist[i]->name, tmpName) == 0)
		{
			free(phonelist[i]); // free

			for(j=i; j<numofdata-1 ; j++)
			{
				phonelist[j] = phonelist[j+1];
			}
			numofdata = numofdata -1;
			puts("Deleted !!");
			getchar();
			return;
		}
	}
#endif

	for(i=0; i<numofdata ; i++)
	{
		if(strcmp(phonelist[i]->name, tmpName) == 0)
		{
			idxofMatchingData[matchedCount++] = i;
		}
	}

	if(matchedCount ==0)
	{
		printf("no matched data !!\n");
		getchar();
		return;
	}
	else if(matchedCount ==1)
	{
		delIdx = idxofMatchingData[0];
	}
	else
	{
		for(i=0 ; i<matchedCount ; i++)
		{
			printf("NUM %d\n", i+1);
			ShowPhoneInfo(phonelist[idxofMatchingData[i]]);
		}

		fputs("Select:%d", stdout);
		scanf("%d", &selection);
		fflush(stdin);

		delIdx = idxofMatchingData[selection-1];
	}

	free(phonelist[delIdx]);
	for(i=delIdx ; i<numofdata-1; i++)
	{
		phonelist[i] = phonelist[i+1];
	}

	numofdata--;

	puts("Data Deleted !!");
	getchar();
}


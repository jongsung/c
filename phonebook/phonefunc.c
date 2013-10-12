#include "common.h"
#include "phonedata.h"
#include "phonefunc.h"

#define LIST_NUM    100

int numofdata = 0;
//phonedata phonelist[LIST_NUM];
phonedata *phonelist[LIST_NUM];

void InputPhoneData(void)
{
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
	char tmpName[NAME_LEN];
	fputs("Input Search Name:", stdout);
	gets(tmpName);

	for(i=0; i<numofdata ; i++)
	{
		//if(strcmp(phonelist[i].name, tmpName) == 0)
		if(strcmp(phonelist[i]->name, tmpName) == 0)
		{
			ShowPhoneInfo(phonelist[i]);
			fputs("Search founded !", stdout);
			getchar();
			return;
		}
	}

	fputs("No Search result", stdout);
	getchar();
}


void DeletePhoneData(void)
{
	int i, j;
	char tmpName[NAME_LEN];

	fputs("Input Delete Name:", stdout);
	gets(tmpName);

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
	puts("no data found to delete !!");
	getchar();
	
}


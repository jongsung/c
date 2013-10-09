#include "common.h"
#include "phonedata.h"
#include "phonefunc.h"

#define LIST_NUM    100

int numofdata = 0;
phonedata phonelist[LIST_NUM];

void InputPhoneData(void)
{
    phonedata inputdata;

    if(numofdata >= LIST_NUM)
    {
        printf("esceed max input\n");
        return;
    }

    fputs("input name:", stdout);
    gets(inputdata.name);
    fflush(stdin);

//    fputs("input number:", stdout);
//    gets(inputdata.phonenum);
    strcpy(inputdata.phonenum, "000-000-0000");

    phonelist[numofdata] = inputdata;
    numofdata++;

    //printf("%s]\n", __FUNCTION__);
    getchar();
}


void ShowAllData(void)
{
    printf("%s]\n", __FUNCTION__);
    
    int i = 0;
    
    for(i=0; i<numofdata ; i++)
    {
        printf("data num: %d\n", i);
#if 0
        printf("name: %s\n", phonelist[i].name);
        printf("phone: %s\n", phonelist[i].phonenum);
#else
        ShowPhoneInfo(phonelist[i]);
#endif
    }

    getchar();
}

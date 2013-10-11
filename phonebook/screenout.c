#include "common.h"
#include "phonedata.h"


void ShowMenu(void)
{

#ifdef WIN32
	system("cls");
#else
    system("clear");
#endif

    printf("========================================\n");
    printf(" %d. Input \n", PHONE_INPUT);
    printf(" %d. Show All \n", PHONE_SHOWALL);
    printf(" %d. Search \n", PHONE_SEARCH);
	printf(" %d. Delete \n", PHONE_DELETE);
    printf(" %d. Quit \n", PHONE_QUIT);
    printf("========================================\n");
    printf("Select: ");
}


void ShowPhoneInfo(phonedata phone)
{
    printf("========================================\n");
    printf(" name: %s\n", phone.name);
    printf(" phone number: %s\n", phone.phonenum);
    printf("========================================\n");
}

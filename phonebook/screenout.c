#include "common.h"
#include "phonedata.h"

void ShowMenu(void)
{
    system("clear");
    
    printf("========================================\n");
    printf(" 1. Input \n");
    printf(" 2. Show All \n");
    printf(" 3. Quit \n");
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
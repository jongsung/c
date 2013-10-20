#include "common.h"
#include "screenOut.h"
#include "phoneFunc.h"


/* ��    ��: int main (void)
 * ��    ��: ����� ���� ó��. 
 * ��    ȯ: ���� ���� �� 0.
 *
 */
int main(void)
{
    int inputMenu = 0;

    /* ���α׷� ���۰� ���ÿ� ������ Load! */
    //LoadDataFromFile();
    LoadDataFromFileInStruct();
    
    while(1)
    {
        ShowMenu();
        fputs("�����ϼ���: ", stdout);
        scanf("%d", &inputMenu);
        fflush(stdin);
  		        
        switch(inputMenu)
        {
        case PHONE_INPUT:
            InputPhoneData();
            break;
        
        case PHONE_SHOWALL:
            ShowAllData();
            break;

        case PHONE_SEARCH:
            SearchPhoneData();
            break;

        case PHONE_DELETE:
            DeletePhoneData();
            break;        
        
        case PHONE_CHANGE:
            ChangePhoneData();
            break;
        }
		
        if(inputMenu==PHONE_QUIT)
        {
            /* ���α׷� ����� ������ Store! */
            // StoreDataToFile();
            StoreDataToFileInStruct();
            puts("�̿��� �ּż� ������~");
            break;
        }
    }    
    return 0;
}

/* end of file */
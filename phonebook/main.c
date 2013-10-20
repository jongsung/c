#include "common.h"
#include "screenOut.h"
#include "phoneFunc.h"


/* 함    수: int main (void)
 * 기    능: 사용자 선택 처리. 
 * 반    환: 정상 종료 시 0.
 *
 */
int main(void)
{
    int inputMenu = 0;

    /* 프로그램 시작과 동시에 데이터 Load! */
    //LoadDataFromFile();
    LoadDataFromFileInStruct();
    
    while(1)
    {
        ShowMenu();
        fputs("선택하세요: ", stdout);
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
            /* 프로그램 종료시 데이터 Store! */
            // StoreDataToFile();
            StoreDataToFileInStruct();
            puts("이용해 주셔서 고마워요~");
            break;
        }
    }    
    return 0;
}

/* end of file */
#include "common.h"
#include "screenout.h"
#include "phonefunc.h"

int main(void)
{
    int inputMenu = 0;
    
    while(1)
    {
        ShowMenu();
        
        fputs("Select: ", stdout);
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
            
            case PHONE_QUIT:
            case 'q':
			break;

            default:
            break;
        }
        
        if((inputMenu == PHONE_QUIT) || (inputMenu == 'q'))    
		{
            break;
        }
    }
    
    return 0;
}
    

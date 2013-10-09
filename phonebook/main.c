#include "common.h"
#include "screenout.h"
#include "phonefunc.h"

enum {
    INPUT=1,
    SHOWALL,
    QUIT
};


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
            case INPUT:
            
            break;
            
            case SHOWALL:
            
            break;
            
            case QUIT:
            default:
            break;
        }
        
        if(inputMenu == QUIT)
        {
            break;
        }
    }
    

    return 0;
}
    
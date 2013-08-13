#include <stdio.h>

int main(void)
{
    int num;
    int ret;
    int i;

    printf("%d", 8%3);

    while(1)
    {
        printf("input number > 0:");
        ret = scanf("%d", &num);
        if(ret == EOF)
        {
            printf("ret == EOF\n");
            break;
        }
        else
        {
            for(i=1 ;  i<=num ; i++)
            {
                if((num%i) == 0)
                {
                    printf("%d ", i);
                }
            }
        }
    }

    return 0;
}

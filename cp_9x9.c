#include <stdio.h>

int main(void)
{
    int num;
    int i, j;

    printf("input num(2:even, 1:odd)\n");
    scanf("%d", &num);

    if((num != 1) && (num != 2))
    {
        printf("input errro:%d\n", num);
        return -1;
    }

    if(num ==1)
    {
        for(i=1 ; i<=9 ;  i+=2)
        {
            printf("99: %d\n", i);

            for(j=1 ; j<=9 ; j++)
            {
                printf("%d*%d = %d\n", i, j, i*j);
            }
        }
    }
    else
    {
        for(i=2 ; i<=9 ;  i+=2)
        {
            printf("99: %d\n", i);

            for(j=1 ; j<=9 ; j++)
            {
                printf("%d*%d = %d\n", i, j, i*j);
            }
        }

    }


    return 0;
}

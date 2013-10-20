#include <stdio.h>

int main(void)
{
    int num;
    int sum_odd = 0;
    int sum_even = 0;
    int i=0;

    printf("Input num(num>0):");
    scanf("%d", &num);

    if(num<0)
    {
        printf("input error:%d\n", num);
        return 0;
    }

    for(i=0 ;  i<=num ; i++)
    {
        if((i%2) == 0)
        {
            sum_even = sum_even + i;
        }
        else
        {
            sum_odd = sum_odd + i;
        }
    }
    
    printf("sum of even:%d\n", sum_even);
    printf("sum of odd:%d\n", sum_odd);

    return 0;
}



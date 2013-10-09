#include <stdio.h>

int main()
{
    int i =0;
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    int ret = 0;

    printf("input positive number:");
    scanf("%d, %d", &num1, &num2);
    
    if((num1 <0) || (num2 <0))
    {
        printf("input error:%d, %d\n", num1, num2);
        return -1;
    }

    ret = (num1 < num2) ? 1 : 0;
    if(ret) //
    {
        for(i=num1 ; i<=num2 ; i++)
        {
            sum = sum + i;
        }

    }
    else
    {
        for(i=num2 ; i<=num1 ; i++)
        {
            sum = sum + i;
        }
    }

    printf("sum = %d\n", sum);

    return 0;
}

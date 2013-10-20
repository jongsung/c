#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0;
    int count = 0;
    int i=0;

    printf("Input num(num>0):");
    scanf("%d", &num);

    if(num<2){
        printf("input error:%d\n", num);
        return 0;
    }

    i = 1;
    while(1)
    {
        sum = sum + i;
printf("count=%d, sum=%d\n", i, sum);
        if(sum > num)
        {
            break;
        }
        i++;
    }

    
    printf("count :%d\n",i);

    return 0;
}



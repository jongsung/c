#include <stdio.h>

int main(void)
{
    int min = 0;
    int max = 0 ;
    int total = 0;
    int sum = 0;
    int input = 0;

    int i = 0;

    printf("input num:[0]");
    scanf("%d", &input);
    sum = min = max = input;
    
    for(i=1 ; i<7 ; i++)
    {

        printf("input num:[%d]", i+1);
        scanf("%d", &input);

        if(min > input) {
            min = input;
        }
            
        if(max < input)
        {
            max = input;
        }

        sum = sum + input;
    }

    printf("max = %d\n", max);
    printf("min = %d\n", min);
    printf("sum = %d\n", sum);
    printf("avg = %f\n", (double) sum / 7);

    return 0;
}

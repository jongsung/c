#include <stdio.h>

#define ARR_LEN 20

int main()
{
    int num;
    int array[ARR_LEN];
    int cnt = 0;
    int i   = 0;

    printf("input dec:");
    scanf("%d", &num);

    while(num>0)
    {
        array[cnt] = num %2;
        num = num / 2;

        cnt++;
    }

    printf("dec %d => bin:", num);
    for(i=cnt-1; i>=0 ; i--)
    {
        printf("%d", array[i]);
    }
    printf("\n");

    return 0;
}

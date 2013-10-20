#include <stdio.h>

int test_func(int x)
{
    int array[x];
    int i=0;

    for(i=0 ;i<x; i++)
    {
        array[i] = i;
    }

    for(i=0 ; i<x ; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}


int main(void)
{
    int x = 10;

    test_func(x);

    return 0;
}

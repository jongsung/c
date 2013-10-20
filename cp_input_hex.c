#include <stdio.h>

int main(void)
{
    int ia, ib;
    int sum;

    fputs("input two hex value:", stdout);
    scanf("%x %x", &ia, &ib);
    sum = ia + ib;

    printf("sum oct:%o\n", sum);
    printf("sum dec:%d\n", sum);
    printf("sum hex:0x%x\n", sum);

    return 0;
}


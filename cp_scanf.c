#include <stdio.h>

int main(void)
{
    char cData;
    int iData;
    double dData;
    char strData[100];

    printf("input: char, int, double, string:");
    scanf("%c, %d, %lf, %s", &cData, &iData, &dData, strData);
    
    printf("%c, %d, %f, %s\n", cData, iData, dData, strData);


    return 0;
}

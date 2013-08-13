#include <stdio.h>

int main(void)
{
    char ch;
    int i;
    double fdata;
    char str[100];

    printf("input: char, int, double, string:");
    scanf("%c, %d, %lf, %s", &ch, &i, &fdata, str);
    
    printf("%c, %d, %f, %s\n", ch, i, fdata, str);


    return 0;
}

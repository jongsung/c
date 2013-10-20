#include <stdio.h>


#define PI 3.14

int main(void)
{
    double num;

    puts("input vale:");
    scanf("%lf", &num);

    printf("result = %f\n", num * num * PI);

    return 0;
}

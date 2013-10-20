#include <stdio.h>

int main(void)
{
    double num1, num2;

    fputs("input two number:", stdout);
    scanf("%lf %lf", &num1, &num2);

    printf("a+b=%f\n", num1 + num2);
    printf("a-b=%f\n", num1 - num2);
    printf("a*b=%f\n", num1 * num2);
    printf("a/b=%f\n", num1 / num2);

    return 0;
}

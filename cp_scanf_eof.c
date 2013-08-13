#include <stdio.h>

int main(void)
{
    int total = 0;
    int input = 0;
    int ret;

    while(1)
    {
        fputs("Input Data(Crtl+Z to exit):", stdout);
        ret =  scanf("%d", &input);
        if(input == EOF)
        {
            break;
        }

        total = total + input;
    }

    printf("total sum = %d\n", total);

    return 0;
}


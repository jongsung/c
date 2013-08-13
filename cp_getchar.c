#include <stdio.h>

int main(void)
{
    int total = 0;
    char input;

    while(1)
    {
        fputs("Input Data(Crtl+Z to exit):", stdout);
        input =  getchar();
        if((input == EOF) || (input == 'x'))
        {
            break;
        }

        fflush(stdin);
        total++;
        //printf("total count = %d\n", total);
    }

    printf("total count = %d\n", total);

    return 0;
}


#include <stdio.h>

int main(void)
{
    char ch;

    while(1)
    {
        printf("input char:");
        //scanf("%c", &ch);
        ch = getchar();

        if(ch == EOF)
            break;


        else if('a' <= ch && ch<= 'z')
        {
            puts("a~z");
        }

        else if('A' <= ch && ch<= 'Z')
        {
            puts("A~Z");
        }
        else if('0' <= ch && ch<='9')
        {
            puts("0~9");
        }
        else
        {
            puts("others");
        }
    }

    return 0;
}


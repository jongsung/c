#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    unsigned int strLen = 0;

    puts("input string");
    gets(str);
    strLen = strlen(str);

    printf("strLen=%d, str=%s\n", strLen, str);

    return 0;
}

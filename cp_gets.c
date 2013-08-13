#include <stdio.h>

#define STR_MAX_LEN 200

int main(void)
{
    char strData[STR_MAX_LEN];

    puts("input strings:");
    //fputs("input strings", stdout);
    
    gets(strData);
    //fgets(strData, STR_MAX_LEN, stdin);

    puts(strData);

    return 0;
}

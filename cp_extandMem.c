#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EXT_STR 6

int extend_memory(char **pStr, int strLen);

int main(void)
{
    char str[] = "Hello ";
    int strLen = strlen(str);
    char *pStr = (char *) malloc(strLen * sizeof(char));
    if(pStr == NULL)
    {
        return -1;
    }

    strcpy(pStr, str);
    printf("strlen=%d, string=%s\n", strLen, pStr);
    
    strLen = extend_memory(&pStr, strLen); 

    strcat(pStr, "World");

    printf("strlen=%d, string=%s\n", strLen, pStr);
    
    return 0;
}

int extend_memory(char **pStr, int strLen)
{
    int i;
    char *pStrNew = (char *) malloc((strLen + EXT_STR) * sizeof(char));
    if(pStrNew == NULL)
    {
        return -1;
    }

    for(i=0; i<strLen ; i++)
    {
        pStrNew[i] = (*pStr)[i];
    }

    free(*pStr);
    *pStr = pStrNew;

    return strLen + EXT_STR;
}

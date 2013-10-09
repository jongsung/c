#include <stdio.h>
#include <string.h>

int main(void)
{
	char chWrite[] = "가나다라마바";
	int i;
	
	FILE *fp = fopen("file.txt", "w");
	if(fp == NULL)
	{
		puts("file open error!");
		return 0;
	}
	
	for(i=0 ;  i<strlen(chWrite) ; i++)
	{
		fputc(chWrite[i], fp);
	}
	
	fclose(fp);
	puts("file write finished\n");
	
	return 0;
}











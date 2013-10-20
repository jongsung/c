#include <stdio.h>
#include <stdlib.h>

#define ARR_LEN	20
//#define __DEBUG

void Dec2Bin(int num, int *pArray, int *pArrayLen)
{
	int count = 0;
	int array[ARR_LEN] = {0, };

	int i=0, j=0;
	
#ifdef __DEBUG
	printf("[%s, %d] num = %d\n", __FUNCTION__, __LINE__, num);
#endif

	while(num>0)
	{
#ifdef __DEBUG
		printf("[%s, %d] num = %d\n", __FUNCTION__, __LINE__, num);
#endif

		array[count] = num % 2;
#ifdef __DEBUG
		printf("[%s, %d] array[%d] = %d\n", __FUNCTION__, __LINE__, count, array[count]);
#endif
		
		count++;

		num = num / 2;
	}

	j = count - 1;

	for(i=0 ; i<count ; i++)
	{
		pArray[i] = array[j];
#ifdef __DEBUG
		printf("%d %d\n", pArray[i], array[j]);
#endif
		j--;
	}

#ifdef __DEBUG
	for(i=0 ; i<count ; i++)
	{
		printf("[%s, %d] pArray[%d] = %d\n", __FUNCTION__, __LINE__, i, pArray[i]);
	}
#endif

	*pArrayLen = count;
}


int main(int argc, char *argv[])
{
	int input = 0;
	int result = 0;
	int array[ARR_LEN] = {0, };
	int arrayLen = 0;
	int i = 0;

	fputs("Input three number:", stdout);
	scanf("%d", &input);
		
	Dec2Bin(input, array, &arrayLen);

	printf("[%s, %d] %d(dec) = ", __FUNCTION__, __LINE__, input);
	for(i=0 ; i<arrayLen ; i++)
	{
		printf("%d", array[i]);
	}
	printf("(bin)\n");
	
	return 0;
}




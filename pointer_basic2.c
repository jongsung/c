#include <stdio.h>

void test1(void)
{
	//int a[3][2] = {1, 2, 3, 4, 5, 6}; //
	int a[3][2] = {{1, 2},
				   {3, 4},
				   {5, 6}};

	printf("%s]\n", __FUNCTION__);
			   
	printf("a: %p\n", a);
	printf("a+1: %p\n", a+1);
	printf("a+2: %p\n", a+2);

	printf("a[0]: %p\n", a[0]);
	printf("a[1]: %p\n", a[1]);
	printf("a[2]: %p\n", a[2]);
}

void test2_show_array(int (*ptr)[4], int size)
{
	int i, j;
	printf("%s]\n", __FUNCTION__);
	
	for(i=0; i<size ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}
}

void test2()
{
	int arr1[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
	int arr2[3][4] = {{1}, {2}, {3}};
	
	printf("%s]\n", __FUNCTION__);
	
	test2_show_array(arr1, 2);
	test2_show_array(arr2, 3);
}



int main(void)
{
	test1();
	
	printf("\n");
	test2();
}
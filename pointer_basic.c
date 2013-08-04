#include <stdio.h>
#include <string.h>

void test1(void)
{
    int a[5] = {0,1,2,3,4};

    printf("%d %d\n", a[0], a[1]);
    printf("%p %p\n", &a[0], &a[1]);
    printf("%p \n", a);
}

#if 0
void test2(void)
{
    int a[5] = {0,1,2,3,4};
    int b = 10;

    a = &b; // compile error, a is const point
}
#endif

void test3()
{
    char *ptr1 = NULL;
    int *ptr2 = NULL;
    double *ptr3= NULL;

    printf("%p, %p, %p\n", ptr1++, ptr2++, ptr3++);
    printf("%p, %p, %p\n", ptr1, ptr2, ptr3);
}

void test4()
{
    int a[5] = {0,1,2,3,4};
  int *pA = a;
	
	printf("%d\n", *pA);
	printf("%d\n", *(++pA));
	printf("%d\n", *(++pA));
	
	printf("%d\n", *(pA++));
	printf("%d\n", *(pA++));
	
	pA = a;
	printf("%d\n", *(pA+2));
}

void test5()
{
	int arr[2] = {1,2};
	int *pArr = arr;
	
	printf("%d %d\n", arr[0], *(arr+0));
	printf("%d %d\n", arr[1], *(arr+1));
	
	printf("%d %d\n", pArr[0], *(pArr+0));
	printf("%d %d\n", pArr[1], *(pArr+1));
}

void test6()
{
	char str1[] = "hello";
	
	printf("%s = size(%d)\n", str1, strlen(str1));
}

void test7()
{
	int a = 10, b=20, c=30;
	int *pArr[3] = {&a, &b, &c};
	
	printf("size(%d)\n", sizeof(pArr));
	printf("%d %d %d\n", *pArr[0], *pArr[1], *pArr[2]);
}

void test8()
{
	char *pArr[3] = {"kiwi", "banana", "apple"};
	
	printf("size(%d)\n", sizeof(pArr));
	printf("%s %s %s\n", pArr[0], pArr[1], pArr[2]);
}

#if 0
void test9()
{
	int a=10;
	int b=20;
	int * const pA = &a;
	pA = &b; // compile error
}
#endif

void main(void)
{
    test1();
    //test2();

    test3();
	test4();
	test5();
	test6();
	test7();
	test8();
}


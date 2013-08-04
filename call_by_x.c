#include <stdio.h>


void call_by_value(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
	
	printf("%s] a(%d), b(%d)\n", __FUNCTION__, a, b);
}

void test_call_by_value(void)
{
	int val1 = 10;
	int val2 = 20;
	
	printf("%s] val1(%d), val2(%d)\n", __FUNCTION__, val1, val2);
	call_by_value(10, 20);
	
	printf("%s] val1(%d), val2(%d)\n", __FUNCTION__, val1, val2);
}

void call_by_reference(int *pA, int *pB)
{
	int tmp = *pA;
	*pA = *pB;
	*pB = tmp;
	
	printf("%s] *pA(%d), *pB(%d)\n", __FUNCTION__, *pA, *pB);
}

void test_call_by_reference(void)
{
	int val1 = 10;
	int val2 = 20;
	
	printf("%s] val1(%d), val2(%d)\n", __FUNCTION__, val1, val2);
	call_by_reference(&val1, &val2);
	printf("%s] val1(%d), val2(%d)\n", __FUNCTION__, val1, val2);
}


void call_by_reference2(int *pA, int *pB) /* error case */
{
	int *pTmp = pA;
	pA = pB;
	pB = pTmp;
	
	printf("%s] *pA(%d), *pB(%d)\n", __FUNCTION__, *pA, *pB);
}

void test_call_by_reference2(void) /* error case */
{
	int val1 = 10;
	int val2 = 20;
	int *pVal1 = &val1;
	int *pVal2 = &val2;
	
	printf("%s] val1(%d), val2(%d)\n", __FUNCTION__, val1, val2); // 10, 20
	printf("%s] val1(%d), val2(%d)\n", __FUNCTION__, *pVal1, *pVal2); // 10, 20
	call_by_reference2(pVal1, pVal2);
	printf("%s] val1(%d), val2(%d)\n", __FUNCTION__, val1, val2); // 10, 20
	printf("%s] val1(%d), val2(%d)\n", __FUNCTION__, *pVal1, *pVal2); // 10, 20
}

void call_by_reference3(int **pA, int **pB) /* fix the error case by double pointer */
{
	int *pTmp = *pA;
	*pA = *pB;
	*pB = pTmp;
	
	printf("%s] *pA(%d), *pB(%d)\n", __FUNCTION__, **pA, **pB);
}

void test_call_by_reference3(void) 
{
	int val1 = 10;
	int val2 = 20;
	int *pVal1 = &val1;
	int *pVal2 = &val2;
	
	printf("%s] val1(%d), val2(%d)\n", __FUNCTION__, val1, val2); // 10, 20
	printf("%s] val1(%d), val2(%d)\n", __FUNCTION__, *pVal1, *pVal2); // 10, 20
	call_by_reference3(&pVal1, &pVal2);
	printf("%s] val1(%d), val2(%d)\n", __FUNCTION__, val1, val2); // 10, 20
	printf("%s] val1(%d), val2(%d)\n", __FUNCTION__, *pVal1, *pVal2); // 20, 10
}

int main(void)
{
	test_call_by_value();
	printf("\n");
	test_call_by_reference();
	printf("\n");
	test_call_by_reference2();
	printf("\n");
	test_call_by_reference3();
}
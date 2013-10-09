#include <stdio.h>

void test1()
{
	int a=4, b=20, c=35;
	
	if(a&b)
		printf("true\n"); // 4
	else
		printf("false\n");	


	printf("a&b=%d\n", a&b);


	if(c&0x20 ==1)
		printf("true\n");
	else
		printf("false\n");	//
	
	printf("c&0x20=%d\n", c&0x20);
}



void test2()
{
	int a =-1;
	unsigned int b=1;
	
	printf("a=%d, b=%d\n", a,b);
	
	if(a<b)
		printf("true\n");
	else
		printf("false\n"); //
	
	if(a>b)
		printf("true\n"); //
	else
		printf("false\n");
	
	if(b<a)
		printf("true\n"); //
	else
		printf("false\n");		


	if(b>a)
		printf("true\n"); //
	else
		printf("false\n");		


}


void test3()
{
	double a =2^3;
	double b= 2<<2;
	double c= 8%9;
	double d = 5/2*4;


	printf("a=%f, b=%f, c=%f, d=%f\n", a, b, c, d); // 1.0, 8.0, 8.0, 8.0
}


void test4()
{
	int a=1;
	int b=2;
	int c=1;
	
	int d = a|b&~c;
	
	printf("d=%d, %d\n", d, ~c); //3, -2
}



typedef struct node Node;
struct node{
	int data;
	Node *prev;
	Node *next;
};



void test5()
{
	int x=-5;
	printf("\nthe sign of %d is %c\n", x, (x>0) ? '+'	:'-'); // -5, -
}



int test6()
{
	int a=10;
	{
		int a =20;
		printf("a=%d\n", a); // 20
	}
	a++;
	{
		//int a=0;
		printf("a=%d", a); //11
	}
	return 0;
}



void test7()
{
	unsigned int buf=100000;
	unsigned char xbuf[2];
	memset(xbuf, 0x0, 4);
	memcpy(xbuf, (unsigned char*)&buf+2, 2);
	
	printf("\nsizeof xbuf=%d\n", sizeof(xbuf)); //2
	printf("\nxbuf[0]= %d, xbuf[1]=%d\n", xbuf[0], xbuf[1]); // 1, 0
}


void test8()
{
	unsigned short x, y, z;
	x=0;
	y=30;
	
	while(x>=0)
	{
		printf("x= %d, y=%d, z=%d\n", x, y, z);
		x++;
		z= y/x;
	}
}


void test9()
{
	static char str[] = "KOREA";
	char *p = str;
	
	while(*p)
	{
		*p = *p - ('A' - 'a');
		p++;	
	}
	printf("str = %s\n", str);
}



void test10()
{
	int a[4] = {10, 20, 30, 40};
	int *p = &a[0];
	
	printf("\n%d %d %d %d\n", a[2], *(a+2), (a+2), p[2]);	
}


void test11()
{
	double dnum = -3.75;
	printf("dnum, %x\n", dnum);
}
	
void test12()
{
	int x =0, y=0, res;
	
	res = ++x||++y +2;
	printf("x=%d, y=%d, res=%d\n", x, y, res); //1, 0, 3
}	


void main()
{
	test1();
	test2();	
	test3();
	test4();
	
	printf("result = %d\n", 10%3);
	printf("%02d", 1);
	
	test5();
	
	test6();
	
	test7();
	
	//test8();
	
	test9();
	
	test10();
	
	test11();
	
	test12();
}
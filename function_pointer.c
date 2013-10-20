#include <stdio.h>

#define PLATFORM_VERSION10 10
#define PLATFORM_VERSION15 15

typedef struct
{
    unsigned char platform_version;
    void(*a)(void);
    void(*b)(void);
} default_settings;

default_settings test_func;

void func_aaa(void)
{
    printf("%s\n", __FUNCTION__);
}

void func_bbb(void)
{
    printf("%s\n", __FUNCTION__);
}

void func_ccc(void)
{
    printf("%s\n", __FUNCTION__);
}

void func_ddd(void)
{
    printf("%s\n", __FUNCTION__);
}

void setting_board(unsigned int mode)
{
  if(mode == PLATFORM_VERSION10)
	{
		test_func.a = func_aaa;
		test_func.b = func_bbb;
	}
	else if(mode == PLATFORM_VERSION15)
	{
		test_func.a = func_ccc;
		test_func.b = func_ddd;
	}
	else
	{
		printf("error: mode = %d\n", mode);
	}
}


int main(void)
{
	setting_board(PLATFORM_VERSION10);
	test_func.a();
	test_func.b();
}
	
	

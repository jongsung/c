#include <stdio.h>

void test1()
{
    int a = 10;
    int b = 20;
    int * const pA = &a;

    a = 30;
//    pA = &b; // pA is readonly 

}

void test2()
{
    int a = 10;
    int b = 20;
    const int *pA;

    pA = &a;
    
    a = 20;
//    *pA = 30; *pA is readonly
}



int main(void)
{
    test1();
    test2();
}

/*
使用内联函数inline可以在主函数中重复调用函数的情况不需要申请栈空间，从而提升效率。现在的编译器可以自动将一些函数优化成内联函数
*/
#include "stdio.h"
#include "stdlib.h"
inline int square(int x);//内联函数的声明
inline int square(int x)
{
    return x*x;
}

int main(void)
{
    int i = 1;
    while (i<=100)
    {
        printf("%d的平方是%d\n",i-1,square(i++));//i从右向左执行
    }
    system("pause");
    return 0;
}
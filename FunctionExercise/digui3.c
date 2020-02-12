/*
使用递归要满足的两个基本条件1：调用函数本身2：设置了正确的结束条件
*/#include "stdio.h"
#include "stdlib.h"
long fact(int num);
long fact(int num)
{
    long result;
    if (num>0)
    {
        result = num*fact(num-1);
    }
    else
    {
        result = 1;
    }
    return result;
    
}

int main(void)
{
    printf("5的阶乘是%d",fact(5));
    system("pause");
}
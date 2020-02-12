/*
指针函数->int *p()
函数指针->int (*p)()
*/
#include "stdio.h"
#include "stdlib.h"

int square(int num);
int square(int num)
{
    return num*num;
} 
int main (void)
{
    int num;
    int (*fp)(int a );//指针指向了一个函数（带有一个整型参数，返回值为整型）的地址
    printf("请输入一个值:");
    scanf("%d",&num);
    fp = square;//函数名在经过运算后就是得到了函数的地址
    printf("%d * %d = %d",num,num,(*fp)(num));
    system("pause");
}
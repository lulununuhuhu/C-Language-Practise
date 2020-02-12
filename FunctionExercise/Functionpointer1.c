/*
函数指针做参数
*/
#include "stdio.h"
#include "stdlib.h"

int add(int,int);
int sub(int,int);
int calc(int (*fp)(int,int),int,int);//第一个参数为函数（两个整型参数，返回值为整型）指针

int add(int num1,int num2){
    return num1+num2;
}

int sub(int num1,int num2)
{
    return num1-num2;
}

int calc(int (*fp)(int,int),int num1,int num2)
{
    return (*fp)(num1,num2);
}

int main(void)
{
    printf("3 + 6= %d\n",calc(add,3,6));
    printf("4 - 7 = %d\n",calc(sub,4,7));
    system("pause");
    return 0;
}
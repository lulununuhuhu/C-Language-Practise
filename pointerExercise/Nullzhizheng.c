/*
#define Null ((void*)0)//不指向任何数据的指针
当你还不清楚要将指针初始化为什么地址时，请将它初始化NULL；在对指针进行解引用时，先检查该指针是否是NULL。这种策略可以为你今后编写大型程序节省大量时间
*/
#include "stdio.h"
#include "stdlib.h"
int main()
{
    int *p1 ;
    int *p2 =  NULL;//NULL用于指针和对象，表示控制，指向一个不被使用的地址
    printf("%d\n,*p1");
    printf("%d\n",*p2);
    system("pause");
}
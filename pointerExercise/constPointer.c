/*
指针可以修改为指向不同的常量，指针可以也修改为指向不同的变量；（有一类特殊指针常量指针指向的地址不可变）
可以通过解引用来读取指针指向的数据，但不可以通过解引用修改指针指向的数据
*/
#include "stdio.h"
#include "stdlib.h"

int main (void)
{
    int num = 520;
    const int cnum = 880;
    const int *pc = &cnum;
    printf("cnum: %d,&cnum: %p\n",cnum,&cnum);
    printf("*pc: %d,pc: %p\n",*pc,pc);
    pc = &num;
    printf("num: %d,&num: %p\n",num,&num);
    printf("*pc: %d,pc: %p\n",*pc,pc);

    int *const p = &num;//常量指针的定义,指针指向的地址不可变
    *p = 1024;
    printf("*p: %d\n",*p);

    // p = &cnum;
    // printf("*p: %d\n",*p);
    system("pause");
}
#include "stdio.h"
#include "stdlib.h"

typedef int  (*PTR_TO_FUN)(void);//PTR_TO_FUN是一个指向参数是空，返回值是int类型的函数的指针

int fun(void)
{
    return 520;
}

int main(void)
{
    PTR_TO_FUN ptr_to_fun = &fun;
    printf("%d",(*ptr_to_fun)());
    system("pause");
}
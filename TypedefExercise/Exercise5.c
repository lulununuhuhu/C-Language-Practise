#include "stdlib.h"
#include "stdio.h"

typedef int *(*PTR_TO_FUN)(int);//PTR_TO_FUN是一个指针数组，指针数组元素是函数指针(函数参数是int，返回值是int)

int *funA(int num)
{
    printf("%d\t",num);
    return &num;
}

int *funB(int num)
{
    printf("%d\t",num);
    return &num;
}

int *funC(int num)
{
    printf("%d\t",num);
    return &num;
}

int main(void)
{
    PTR_TO_FUN array[3] = {&funA,&funB,&funC};
    for (int i = 0; i < 3; i++)
    {
        printf("address of num:%p\n",(*array[i])(i));
    }
    system("pause");
    return 0;
}
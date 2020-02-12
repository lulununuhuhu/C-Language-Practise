#include "stdlib.h"
#include "stdio.h"

int main(void)
{
    int *ptr1 =NULL;
    int *ptr2 = NULL;//作为局部变量分配在内存的栈里
    ptr1 = (int *)malloc(sizeof(int));
    ptr2 = (int *)malloc(sizeof(int)); //由malloc动态分配在内存中的堆
    printf("stack: %p->%p\n",&ptr1,&ptr2);//栈内存地址由高到低进行排列
    printf("heap: %p->%p\n",ptr1,ptr2);//堆内存地址由低到高进行排列
    ptr1 = (int *)realloc(ptr1,20*sizeof(int));
    printf("heap: %p->%p\n",ptr1,ptr2);
    system("pause");
}
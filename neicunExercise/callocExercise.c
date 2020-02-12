/*
函数原型：void *calloc(size_t nmemb,size_t size);
1:calloc函数在内存中动态中动态地申请nmenmb个长度为size的连续内存空间（总尺寸为nmemb*size），这些内存空间全部被初始化为0
2:calloc函数与malloc函数的一个重要区别是calloc在申请完内存后自动初始化该内存空间为零,而malloc函数不进行初始化操作，里边数据是随机的
*/

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main(void)
{
    int *ptr1 = NULL;
    int *ptr2 = NULL;
    ptr1 = (int *)malloc(10*sizeof(int));//第一次申请的内存空间
    ptr2 = (int *)malloc(20*sizeof(int));//第二次申请的内存空间
    memcpy(ptr2,ptr1,10);
    free(ptr1);//将ptr1的10个字节数据拷贝到ptr2后释放ptr1
    free(ptr2);
    system("pause");/*整个函数实现的功能可以通过直接调用realloc函数来实现*/
}
/*
void free(void *ptr);
free函数释放ptr参数指向的内存空间。该内存空间必须由malloc、calloc或realloc函数申请的，否则该函数将导致未定义行为。
如果ptr参数是NULL，则不执行任何操作。
注：该函数并不会修改ptr参数的值，所以调用后它依然指向原来的地方（变为非法空间）
*/
#include "stdio.h"
#include "stdlib.h"

int main()
{
    int *ptr;
    int num;
    ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("内存分配失败！\n");
        exit(1);
    }
    printf("请输入一个数字:");
    scanf("%d",ptr);
    ptr = &num;//动态分配的内存指针作为局部变量的内存地址，这会丢失内存地址，导致内存泄漏
    printf("输出的数字是%d",*ptr);
    free(ptr);
    // printf("输出的数字是%d",*ptr);
    system("pause");
}

/*
内存泄漏的两种情况:1:隐式内存泄漏(即用完内存块没有及时使用free函数释放)
                  2：丢失内存块地址
*/
/*
函数原型:void *malloc(size_t size);
1:malloc函数向系统申请分配size个字节的内存空间，并返回一个指向这块空间的指针
2：函数调用成功，返回一个指向申请的内存空间的指针，由于返回类型是void指针（void *），所以它可以转换成任何类型的数据；如果函数调用失败，返回值是NULL.
  另外，如果size参数设置为0，返回值也可能是NULL，但这并不意味函数调用失败。
*/
#include "stdio.h"
#include "stdlib.h"

int main(void)
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("分配内存失败!\n");
        exit(1);
    }
    printf("请输入一个数:");
    scanf("%d",ptr);
    printf("你输入的整数是:%d\n",*ptr);
    system("pause");
}
#include "stdlib.h"
#include "stdio.h"

int main(void)
{
    int i = 520;//定义一个作用域在main函数的局部变量
    printf("before i = %d",i);
    for (int i = 0; i < 10; i++)
    {
        printf("i = %d\n",i);//定义一个作用域在for循环体的局部变量
    }
    printf("after i = %d\n",i);
    printf("局部变量在不同作用域，名字相同不会冲突\n");
    system("pause");
}
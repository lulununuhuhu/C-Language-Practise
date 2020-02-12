#include "stdlib.h"
#include "stdio.h"

int global_uninit_var;//全局变量(未初始化)
int global_init_var1 = 520;
int global_init_var2 = 880;//全局变量(初始化)
void fun(void);
void func(void)
{
    ;
}
int main(void)
{
    int local_var1;//局部变量(未初始化)
    int local_var2;
    static int static_uninit_var;//静态局部变量
    static int static_init_var = 456;

    char *str1 = "I Love FishC.com!";
    char *str2 = "You are right";//字符串常量
    int *malloc_var = (int *)malloc(sizeof(int));//动态内存
    printf("addr of func ->%p\n",func);
    printf("addr of str1 ->%p\n",str1);
    printf("addr of str2 ->%p\n",str2);
    printf("addr of global_init_var1 ->%p\n",&global_init_var1);
    printf("addr of global_init_var2 ->%p\n",&global_init_var2);
    printf("addr of static_init_var ->%p\n",&static_init_var);
    printf("addr of static_uninit_var ->%p\n",&static_uninit_var);
    printf("addr of global_uninit_var ->%p\n",&global_uninit_var);
    printf("addr of malloc_var ->%p\n",malloc_var);
    printf("addr of local_var1 ->%p\n",&local_var1);
    printf("addr of local_var2 ->%p\n",&local_var2);
    system("pause");
}
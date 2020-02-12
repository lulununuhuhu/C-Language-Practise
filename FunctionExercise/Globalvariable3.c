#include "stdio.h"
#include "stdlib.h"

int a ;
int b = 150;
void Func(void);
void Func()
{
    int b;
    a = 250;
    b = 120;
    printf("In Func,a = %d,b = %d\n",a,b);//全局变量中的a，局部变量中的b
}
int main(void)
{
    printf("Before Func,a = %d,b = %d\n",a,b);//全局变量中的a，全局变量中的b
    Func();
    printf("After Func,a = %d,b = %d\n",a,b);//全局变量中的a，全局变量中的b
    system("pause");
}
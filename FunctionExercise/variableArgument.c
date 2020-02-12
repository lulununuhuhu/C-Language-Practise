#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"

int sum(int n,...);
int sum(int n,...)
{
    int i,sum = 0;
    va_list vap;//可变参数列表
    va_start(vap,n);//初始化可变参数列表
    for ( i = 0; i < n; i++)
    {
        sum+=va_arg(vap,int);//获取可变参数变量，变量类型为int
    }
    va_end(vap);//关闭参数列表
    return sum;  
}

int main (void)
{
    int result = sum(3,6,1,2,3,2,5,6);
    printf("和为%d\n",result);
    result = sum(2,6,1);
    printf("和为%d\n",result);
    result = sum(7,6,1,2,3,2,5,6);
    printf("和为%d\n",result);   
    system("pause");
    return 0;  
}
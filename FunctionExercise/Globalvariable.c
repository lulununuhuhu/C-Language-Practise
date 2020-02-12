#include "stdio.h"
#include "stdlib.h"

void a();
void b();
void c();
int count = 0;//定义一个全局变量count.如果不对全局变量进行初始化，那么它会自动初始化为0
float f;

void a(){
    count++;
}
void b(){
    count++;
}
void c(){
    count++;
}

int main()
{
    a();
    b();
    c();
    a();
    printf("小郭今天被爆了%d次\n",count);
    printf("全局变量默认初始化为%f\n",f);
    printf("函数a的地址是%p\n",&a);
    printf("函数b的地址是%p\n",&b);
    system("pause");
}
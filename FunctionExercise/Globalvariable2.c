/*
全局变量会使你的程序占用更多的内存，因为全局变量从被定义时候开始，直到程序结束才退出；
全局变量会降低程序的可读性；
提高了程序的耦合性，不易于代码扩展
*/
#include "stdio.h"
#include "stdlib.h"

void func();
void func()
{
    extern int count;//extern关键字，告诉编译器,该变量在其他地方定义
    count++;
}
int count = 5;

int main (void)
{
    func();
    printf("%d\n",count);
    system("pause");
    return 0;
}
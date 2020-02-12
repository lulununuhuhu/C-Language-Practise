#include "stdlib.h"
#include "stdio.h"
int main()
{
    char *p1[5] = {"编程改变世界","Just do it","天空灰的像哭过","离开你以后","并没有更自由"};//指针数组
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%s\n",p1[i]);
    }
    printf("%s","sada");
    system("pause");
        return 0;
}
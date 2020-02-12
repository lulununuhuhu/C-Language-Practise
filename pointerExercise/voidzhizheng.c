/*
void指针我们把它称之为通用指针，即可以指向任何类型的指针。任何类型的指针
都可以赋值给void指针
*/
#include "stdlib.h"
#include "stdio.h"
int main(void)
{
    int num =1024;
    int *pi = &num;
    char *ps = "FishC";
    void *pv;
    pv = pi;
    printf("%p\n%p\n",pi,pv);
    printf("%d\n",*(int*)pv);
    pv = ps;
    printf("%s\n%p\n%p\n",ps,ps,pv);
    system("pause");
}
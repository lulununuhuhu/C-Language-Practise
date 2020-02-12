#include "stdlib.h"
#include "stdio.h"

int main()
{
    int a=1,b=2,c=3,d=4,e=5;
    int saf[5] = {0,2,3,6,5};
    int *pi[5] = {&a,&b,&c,&d,&e};// 指针数组，[]优先级高于*
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",*pi[i]);
    }
    system("pause");
}
/*
typedef是对类型的封装
*/
#include "stdio.h"
#include "stdlib.h"

typedef int zhengxing;
#define inter int
int main(void)
{
    zhengxing a;
    int b;
    a = 520;
    b = a;
    printf("sieze of a = %d\n",sizeof(a));
    // unsigned zhengxing c;
    unsigned inter c = 6;
    printf("c = %u",c);
    system("pause");
}
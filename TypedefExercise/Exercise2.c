#include "stdlib.h"
#include "stdio.h"
typedef int INTEGER, *PRINT;//INTEGER封装为int类型，*PRINT封装为int指针类型
int main(void)
{
    INTEGER a = 520;
    PRINT b,c;
    b = &a;
    c = b;
    printf("address of a = %p\n a = %d ",b,*c);
    system("pause");
}
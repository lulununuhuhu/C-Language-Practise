/*int (*p2)[5],数组指针*/
#include "stdlib.h"
#include "stdio.h"
int main(void)
{
    int temp[5] = {1,2,3,4,5};
    int (*p2)[5] = &temp;
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",*(*p2+i));
    }
    system("pause");
    return 0;
}
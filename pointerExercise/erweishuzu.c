#include "stdlib.h"
#include "stdio.h"
int main(void)
{
    int  array[4][5] = {0,1,2,3,4,5};
    printf("sizeof int:%d\n",sizeof(int));
    printf("array:%p\n",array);//array数组的首地址
    printf("array+1:%p\n",array+1);//array数组第二行第一个元素的首地址
    printf("%p\n",*(array+1));
    system("pause");
    return 0;
}
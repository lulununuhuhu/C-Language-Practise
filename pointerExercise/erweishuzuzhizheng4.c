#include "stdio.h"
#include "stdlib.h"
int main(void)
{
    int array[3][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}};
    int (*p)[4] =array;//数组指针，p指向了一个数量为4的一维数组
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%5d",*(*(p+i)+j));
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
#include "stdio.h"
#include "stdlib.h"
typedef int (*PTR_TO_ARRAY)[3];//PT具有PTR_TO_ARRAY是一个指向3个元素的数组的数组指针类型

int main(void)
{
    int array[3] = {1,2,3};
    PTR_TO_ARRAY ptr_array = &array;
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",(*ptr_array)[i]);
    }
    system("pause");
}
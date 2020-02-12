#include "stdio.h"
#include "stdlib.h"
int main(void)
{
    int *ptr = NULL;
    int num;
    printf("请输入待录入整数的个数:");
    scanf("%d",&num);
    ptr = (int *)malloc(num*sizeof(int));
    for (int i = 0; i < num; i++)
    {
        printf("第%d个整数是:",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("你录入的整数是:");
    for (int i = 0; i < num; i++)
    {
        printf("%3d",ptr[i]);
    }
    putchar('g');
    free(ptr);
    system("pause");
}
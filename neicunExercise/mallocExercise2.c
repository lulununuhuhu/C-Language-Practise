#include "stdio.h"
#include "stdlib.h"
int main(void)
{
    int *ptr = NULL;
    int num;
    printf("�������¼�������ĸ���:");
    scanf("%d",&num);
    ptr = (int *)malloc(num*sizeof(int));
    for (int i = 0; i < num; i++)
    {
        printf("��%d��������:",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("��¼���������:");
    for (int i = 0; i < num; i++)
    {
        printf("%3d",ptr[i]);
    }
    putchar('g');
    free(ptr);
    system("pause");
}
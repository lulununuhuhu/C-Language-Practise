/*
����ԭ��:void *malloc(size_t size);
1:malloc������ϵͳ�������size���ֽڵ��ڴ�ռ䣬������һ��ָ�����ռ��ָ��
2���������óɹ�������һ��ָ��������ڴ�ռ��ָ�룬���ڷ���������voidָ�루void *��������������ת�����κ����͵����ݣ������������ʧ�ܣ�����ֵ��NULL.
  ���⣬���size��������Ϊ0������ֵҲ������NULL�����Ⲣ����ζ��������ʧ�ܡ�
*/
#include "stdio.h"
#include "stdlib.h"

int main(void)
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("�����ڴ�ʧ��!\n");
        exit(1);
    }
    printf("������һ����:");
    scanf("%d",ptr);
    printf("�������������:%d\n",*ptr);
    system("pause");
}
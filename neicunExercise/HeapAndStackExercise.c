#include "stdlib.h"
#include "stdio.h"

int main(void)
{
    int *ptr1 =NULL;
    int *ptr2 = NULL;//��Ϊ�ֲ������������ڴ��ջ��
    ptr1 = (int *)malloc(sizeof(int));
    ptr2 = (int *)malloc(sizeof(int)); //��malloc��̬�������ڴ��еĶ�
    printf("stack: %p->%p\n",&ptr1,&ptr2);//ջ�ڴ��ַ�ɸߵ��ͽ�������
    printf("heap: %p->%p\n",ptr1,ptr2);//���ڴ��ַ�ɵ͵��߽�������
    ptr1 = (int *)realloc(ptr1,20*sizeof(int));
    printf("heap: %p->%p\n",ptr1,ptr2);
    system("pause");
}
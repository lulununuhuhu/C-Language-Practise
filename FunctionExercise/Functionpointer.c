/*
ָ�뺯��->int *p()
����ָ��->int (*p)()
*/
#include "stdio.h"
#include "stdlib.h"

int square(int num);
int square(int num)
{
    return num*num;
} 
int main (void)
{
    int num;
    int (*fp)(int a );//ָ��ָ����һ������������һ�����Ͳ���������ֵΪ���ͣ��ĵ�ַ
    printf("������һ��ֵ:");
    scanf("%d",&num);
    fp = square;//�������ھ����������ǵõ��˺����ĵ�ַ
    printf("%d * %d = %d",num,num,(*fp)(num));
    system("pause");
}
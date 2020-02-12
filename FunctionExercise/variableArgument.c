#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"

int sum(int n,...);
int sum(int n,...)
{
    int i,sum = 0;
    va_list vap;//�ɱ�����б�
    va_start(vap,n);//��ʼ���ɱ�����б�
    for ( i = 0; i < n; i++)
    {
        sum+=va_arg(vap,int);//��ȡ�ɱ������������������Ϊint
    }
    va_end(vap);//�رղ����б�
    return sum;  
}

int main (void)
{
    int result = sum(3,6,1,2,3,2,5,6);
    printf("��Ϊ%d\n",result);
    result = sum(2,6,1);
    printf("��Ϊ%d\n",result);
    result = sum(7,6,1,2,3,2,5,6);
    printf("��Ϊ%d\n",result);   
    system("pause");
    return 0;  
}
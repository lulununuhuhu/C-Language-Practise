/*
ʹ����������inline���������������ظ����ú������������Ҫ����ջ�ռ䣬�Ӷ�����Ч�ʡ����ڵı����������Զ���һЩ�����Ż�����������
*/
#include "stdio.h"
#include "stdlib.h"
inline int square(int x);//��������������
inline int square(int x)
{
    return x*x;
}

int main(void)
{
    int i = 1;
    while (i<=100)
    {
        printf("%d��ƽ����%d\n",i-1,square(i++));//i��������ִ��
    }
    system("pause");
    return 0;
}
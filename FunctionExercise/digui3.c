/*
ʹ�õݹ�Ҫ�����������������1�����ú�������2����������ȷ�Ľ�������
*/#include "stdio.h"
#include "stdlib.h"
long fact(int num);
long fact(int num)
{
    long result;
    if (num>0)
    {
        result = num*fact(num-1);
    }
    else
    {
        result = 1;
    }
    return result;
    
}

int main(void)
{
    printf("5�Ľ׳���%d",fact(5));
    system("pause");
}
#include "stdlib.h"
#include "stdio.h"

#define N 100

char *mcopy(char *s,char *t,int m)
{
    t = s+(m-1);//��s�ַ����ӵ�mλ��ʼ��ȡ
    return t;
}

int main()
{
    char str1[N],*str2;
    int m;
    gets(str1);
    str2 = mcopy(str1,str2,3);
    printf("str1��3λ��:%s",str2);
    system("pause");
}
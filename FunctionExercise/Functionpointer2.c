/*
����ָ��������ֵ
*/
#include "stdio.h"
#include "stdlib.h"

int add(int,int);
int sub(int,int);
int calc(int (*)(int,int),int ,int );
int (*select(char))(int,int);

int add(int num1,int num2)
{
    return num1+num2;
}
int sub(int num1,int num2)
{
    return num1-num2;
}
int calc(int (*fp)(int,int),int num1,int num2)//һ������ָ�룬�������ͱ���������ֵ������
{
    return (*fp)(num1,num2);
}
int (*select(char op))(int,int)//������һ���ַ�������ֵ��һ���������������Ͳ���������ֵ�ǲ�����ָ��
{
    switch(op)
    {
        case '+':return add;
        case '-':return sub;
    }
}

int main(void)
{
    int num1,num2;
    char op;
    int (*fp)(int,int);//����һ������ָ��fp
    printf("������һ��ʽ��(��1+3)��");
    scanf("%d%c%d",&num1,&op,&num2);
    fp = select(op);
    printf("%d %c %d = %d\n",num1,op,num2,calc(fp,num1,num2));//��Ч��select(op)(num1,num2)
    system("pause");
}
/*
函数指针做返回值
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
int calc(int (*fp)(int,int),int num1,int num2)//一个函数指针，两个整型变量，返回值是整型
{
    return (*fp)(num1,num2);
}
int (*select(char op))(int,int)//参数是一个字符，返回值是一个函数（两个整型参数，返回值是参数）指针
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
    int (*fp)(int,int);//定义一个函数指针fp
    printf("请输入一个式子(如1+3)：");
    scanf("%d%c%d",&num1,&op,&num2);
    fp = select(op);
    printf("%d %c %d = %d\n",num1,op,num2,calc(fp,num1,num2));//等效于select(op)(num1,num2)
    system("pause");
}
#include "stdio.h"
#include "stdlib.h"
char *getWord(char);//指针函数，使用指针变量作为函数的返回值

char *getWord(char c)
{
    char str1[] = "Apple";
    char str2[] = "Banana";
    char str3[] = "Cat";
    char str4[] = "D";
    switch (c)
    {
    case 'A':
        return str1;//返回局部变量的指针，这种做法是错误的。局部变量的作用域只局限于定义的函数中

    case 'B':
        return "Banana";

    case 'C':
        return "Cat";

    case 'D':
        return "DOG";

    default:
        return "None";
    }
}
int main(void)
{
    char input;
    printf("请输入一个字母：");
    scanf("%c",&input);
    printf("您要的是%s\n",getWord(input));
    system("pause");
    return 0;
}
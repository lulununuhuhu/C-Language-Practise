#include "stdio.h"
#include "stdlib.h"
char *getWord(char);//ָ�뺯����ʹ��ָ�������Ϊ�����ķ���ֵ

char *getWord(char c)
{
    char str1[] = "Apple";
    char str2[] = "Banana";
    char str3[] = "Cat";
    char str4[] = "D";
    switch (c)
    {
    case 'A':
        return str1;//���ؾֲ�������ָ�룬���������Ǵ���ġ��ֲ�������������ֻ�����ڶ���ĺ�����

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
    printf("������һ����ĸ��");
    scanf("%c",&input);
    printf("��Ҫ����%s\n",getWord(input));
    system("pause");
    return 0;
}
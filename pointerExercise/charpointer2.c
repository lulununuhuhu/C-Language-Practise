#include "stdio.h"
#include "stdlib.h"
void copy_string(char from[],char to[]);
void Pointcopy_string(char *from,char *to);
main(void)
{
        char a[] = "I am a teacher.";
        char b[] = "You are a student.�뵺����һ·��";
        char *c = "woshulesuoyoudehuang";
        char d[] = "You are a student.��ڹ켣��ǳ";
        printf("string a = %s\nstring b =%s\n",a,b);
        printf("string c = %s\nstring d =%s\n",c,d);
        printf("copy string a to string b:\n");
        printf("c�ĵ�ַ��%p",c);
        copy_string(b,a);
        Pointcopy_string(c,d);//����ֶδ���Ϊʲô��
        printf("string a = %s\nstring b =%s\n",a,b); 
        printf("string c = %s\nstring d =%s\n",c,d);
        system("pause");
}

void copy_string(char from[],char to[])//���ַ�������Ϊ���� 
{
    int i =0;
    while (from[i]!='\0')
    {
        to[i] = from[i];
        i++;
    }
    to[i] = '\0'; 
}

void Pointcopy_string(char *from,char *to)//���ַ�ָ����Ϊ���� 
{
    for ( ; *from!='\0'; from++,to++)
    {
        *to = *from;
    } 
    *to++ = '\0';
}
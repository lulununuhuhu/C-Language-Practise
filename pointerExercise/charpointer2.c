#include "stdio.h"
#include "stdlib.h"
void copy_string(char from[],char to[]);
void Pointcopy_string(char *from,char *to);
main(void)
{
        char a[] = "I am a teacher.";
        char b[] = "You are a student.半岛铁盒一路向北";
        char *c = "woshulesuoyoudehuang";
        char d[] = "You are a student.借口轨迹搁浅";
        printf("string a = %s\nstring b =%s\n",a,b);
        printf("string c = %s\nstring d =%s\n",c,d);
        printf("copy string a to string b:\n");
        printf("c的地址是%p",c);
        copy_string(b,a);
        Pointcopy_string(c,d);//会出现段错误，为什么？
        printf("string a = %s\nstring b =%s\n",a,b); 
        printf("string c = %s\nstring d =%s\n",c,d);
        system("pause");
}

void copy_string(char from[],char to[])//用字符数组作为参数 
{
    int i =0;
    while (from[i]!='\0')
    {
        to[i] = from[i];
        i++;
    }
    to[i] = '\0'; 
}

void Pointcopy_string(char *from,char *to)//用字符指针作为参数 
{
    for ( ; *from!='\0'; from++,to++)
    {
        *to = *from;
    } 
    *to++ = '\0';
}
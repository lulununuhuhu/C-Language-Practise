#include "stdlib.h"
#include "stdio.h"

#define N 100

char *mcopy(char *s,char *t,int m)
{
    t = s+(m-1);//将s字符串从第m位开始截取
    return t;
}

int main()
{
    char str1[N],*str2;
    int m;
    gets(str1);
    str2 = mcopy(str1,str2,3);
    printf("str1第3位后:%s",str2);
    system("pause");
}
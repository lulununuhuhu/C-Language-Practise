#include <stdlib.h>
#include <stdio.h>

int main()
{
    char *a = "Hello my sunshine";
    char b[20] = "";
    char *pb;
    pb = b;
    for ( ; *a!='\0'; a++,pb++)
    {
        *pb = *a;
    }
    *pb = '\0';
    for (int i=0;b[i]!='\0' ; i++)
    {
        printf("%c",b[i]);
    }
    printf("\n");
    printf("b�ĵ�ַ��%p,b[16]�ĵ�ַ��%p,pb�ĵ�ַ��%p\n",b,&b[16],pb);//pb�ĵ�ַ�Ѿ��Ƶ���b�ַ�����ַ֮��
    printf("b = %s\n",b);
    system("pause");
}
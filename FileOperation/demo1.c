/*
�����ļ�д���ַ� 
*/
#include "stdlib.h"
#include "stdio.h"
#include "error.h"

int main(void)
{
    FILE *fp1;
    FILE *fp2;
    int ch;
    int i = 0;
    char data[_MAX_FNAME];
    if ((fp1 =  fopen("hello.txt","r")) == NULL)
    {
        printf("���ļ�ʧ�ܣ�\n"); 
        exit(EXIT_FAILURE);
    }
    if ((fp2 =  fopen("fishc.txt","w")) == NULL)
    {
        printf("���ļ�ʧ�ܣ�\n");
        exit(EXIT_FAILURE);
    }
    while ((ch = fgetc(fp1)) != EOF)//��д�����ַ�
    {
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    system("pause");
    return 0;
}
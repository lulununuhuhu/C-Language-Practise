/*
�ļ�����Ϊ��׼��������stdin������׼�������stdout������׼�����������stderr��

����ָʾ������ferror
ʹ��clearerr����������Ϊ������ļ�ĩβָʾ���ʹ���ָʾ����״̬
ferrorֻ�ܼ���Ƿ�������޷��������ԭ�򡣴����ϵͳ�����ڳ���ʱ�Ὣ����ԭ��д��errno��
*/
#include "stdlib.h"
#include "stdio.h"

int main(void)
{
    FILE *fp;
    int ch;
    if ((fp = fopen("lines.txt","r")) == NULL)
    {
        fputs("�ļ���ʧ��!\n",stderr);
        exit(EXIT_FAILURE);
    }
    while (1)
    {
        ch = fgetc(fp);
        if(feof(fp))
        {
            break;
        }
        putchar(ch);
    }
    fputc('F',fp);
    if (ferror(fp))
    {
        fputs("�޷�д��!\n",stderr);
    }
    clearerr(fp);
    if ((!feof(fp))&&(!ferror(fp)))
    {
        printf("feof��ferrorΪ�㡣\n");
    }
    
    fclose(fp);
    system("pause");
}
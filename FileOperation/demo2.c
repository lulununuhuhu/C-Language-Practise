/*
fgets�������ڴ�ָ���ļ��ж�ȡ�ַ�����fgets���������Զ�ȡsize-1���ַ�����Ϊ��β�����Զ����һ���ַ���������'\0'������ȡ�����з�('\n')
���ļ�������EOFʱ����ʾ������ȡ('\n')

fputs�������ڽ�һ���ַ���д�뵽ָ�����ļ��У���ʾ�ַ�����β��'\0'���ᱻһ��д�롣�������óɹ��򷵻ط�0ֵ�����ʧ���򷵻�EOF
*/

#include "stdio.h"
#include "stdlib.h"

#define Max 1024

int main(void)
{
    FILE *fp;
    char Buffer[Max];
    if ((fp = fopen("G:\\����.txt","w")) == NULL)
    {
        printf("���ļ�ʧ��!\n");
        exit(EXIT_FAILURE);
    }
    fputs("Line one:Hello world!\n",fp);
    fputs("Line two:Hello lucheng!\n",fp);
    fputs("Line three:I love FishC.com!\n",fp);
   // fputs("������ҹ�ҵİ����������ˮ.",fp);
    fclose(fp);
    if ((fp = fopen("G:\\����.txt","r")) == NULL)
    {
        printf("���ļ�ʧ��!\n");
        exit(EXIT_FAILURE);
    }
    while (!feof(fp))//feof��������ϵ��ļ�������,�����ļ���������ֵΪ���㣬����Ϊ0
    {
        fgets(Buffer,Max,fp);//fgets������һ���������ַ���ָ��ָ���Ŷ�ȡ�ַ�����λ�ã��ڶ���������ָ����ȡ���ַ���,����������FILE����ָ��
    }
    printf("%s",Buffer);
    fclose(fp);
    system("pause");
}
//�������ַ�����ӡ���ε�ԭ������ڶ�ȡ�ַ��Ĺ��������� EOF���� eof ָʾ�������ã������û�����κ��ַ����������� EOF��
//�� s ����ָ���λ�ñ���ԭ�������ݣ��������� NULL
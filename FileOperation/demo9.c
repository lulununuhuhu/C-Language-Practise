/*
��׼IO�ṩ���������͵Ļ���ģʽ��
1�����黺�棨ȫ���棩����������������Ž���ʵ�ʵ��豸��д����
2�����л��棺�ڽ��յ����з�\n֮ǰ�����ݶ����Ȼ����ڻ�������
3�������棺������ֱ�Ӷ�д�豸�ϵ�����
*/
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main(void)
{
    char buff[1024];
    memset(buff,'\0',sizeof(buff));
    setvbuf(stdout,buff,_IOFBF,1024);//setvbuf��������ָ��һ���������Ļ���ģʽ.ָ����stdoutΪ��������buffΪ���з���Ļ�������
                                     //ָ������������ģʽ�ǰ��黺�棬���������ֽ�Ϊ1024
    fprintf(stdout,"Welcome to bbs.fishc.com\n");
    fflush(stdout);//ǿ��ˢ�»�������ʹ���������ݴ�ӡ����
    fprintf(stdout,"�������ݺ������ʾ����!\n");
    getchar();
    system("pause");
}
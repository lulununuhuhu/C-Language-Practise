/*
ferrorֻ�ܼ���Ƿ�������޷��������ԭ�򡣴����ϵͳ�����ڳ���ʱ�Ὣ����ԭ��д��errno��
*/
#include "stdio.h"
#include "stdlib.h"
#include "errno.h"
#include "string.h"

int main(void)
{
    FILE *fp;
    if ((fp = fopen("asfdas.txt","r")) == NULL)
    {
        printf("��ʧ��,ԭ����:%d\n",errno);
        perror("��ʧ��,ԭ����");//perror����ֱ�۵Ĵ�ӡ������ԭ��
        fprintf(stderr,"�𾪣������ԭ��Ȼ��%s\n",strerror(errno));
        //exit(EXIT_FAILURE);
    }
    fclose(fp);
    system("pause");
}
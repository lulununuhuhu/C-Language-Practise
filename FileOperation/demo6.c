/*
fseek�����÷�:���������ļ�����λ��ָʾ��
*/
#include "stdio.h"
#include "stdlib.h"

#define N 4

struct Stu
{
    char Name[40];
    int num;
    float score;
}stu[N],sb;

int main(void)
{
    FILE *fp;
    if ((fp = fopen("sorce.txt","wb")) == NULL)
    {
        printf("���ļ�ʧ��!\n");
        exit(EXIT_FAILURE);
    }
    printf("���ɼ�¼���ļ���(��ʽ ���� ѧ�� ����):\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%s %d %f",stu[i].Name,&stu[i].num,&stu[i].score);
    }
    fwrite(stu,sizeof(struct Stu),N,fp);//fwrite�������ڽ������Զ�������ʽд���ļ���
    fclose(fp);
    if ((fp = fopen("sorce.txt","rb")) == NULL)
    {
        printf("���ļ�ʧ��!\n");
        exit(EXIT_FAILURE);
    }
    fseek(fp,sizeof(struct Stu),SEEK_SET);//���ļ���ʼ��ǰ��һ��Stu�ṹ���С�ľ���
    fread(&sb,sizeof(struct Stu),1,fp);//��ȡ��fwrite����д���ļ�������.sb�Ǵ���ȡ�ļ��������ڴ��еĵ�ַ
    printf("%s(ѧ��:%d)�ĳɼ���:%.2f.\n",sb.Name,sb.num,sb.score);
    fclose(fp);
    system("pause");
}
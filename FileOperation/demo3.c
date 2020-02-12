/*
本demo使用fprintf()和fscanf()函数进行格式化输入和输出
*/
#include "stdlib.h"
#include "stdio.h"
#include "time.h"

int main(void)
{
    FILE *fp;
    time_t t;
    struct tm *p;
    time(&t);
    p = localtime(&t);
    if ((fp = fopen("Date.txt","w")) == NULL)
    {
        printf("打开文件失败!\n");
        exit(EXIT_FAILURE);
    }
    fprintf(fp,"%d-%d-%d %d:%d",p->tm_year+1900,p->tm_mon+1,p->tm_mday,p->tm_hour,p->tm_min);
    fclose(fp);
    if ((fp = fopen("Date.txt","r")) == NULL )
    {
        printf("打开文件夹失败!\n");
        exit(EXIT_FAILURE);
    }
    int year,month,day,hour,minute;
    fscanf(fp,"%d-%d-%d %d:%d",&year,&month,&day,&hour,&minute);
    printf("%d-%d-%d %02d:%02d\n",year,month,day,hour,minute);
    fclose(fp);
    system("pause");
  }
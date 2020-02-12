/*
创建文件写入字符 
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
        printf("打开文件失败！\n"); 
        exit(EXIT_FAILURE);
    }
    if ((fp2 =  fopen("fishc.txt","w")) == NULL)
    {
        printf("打开文件失败！\n");
        exit(EXIT_FAILURE);
    }
    while ((ch = fgetc(fp1)) != EOF)//读写单个字符
    {
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    system("pause");
    return 0;
}
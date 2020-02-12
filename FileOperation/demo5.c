/*
ftell函数用法:获取当前文件所在位置
*/
#include "stdlib.h"
#include "stdio.h"

int main(void)
{
    FILE *fp;
    if ((fp = fopen("hello.txt","w")) == NULL)
    {
        printf("文件打开失败!\n");
        exit(EXIT_FAILURE);
    }
    printf("%ld\n",ftell(fp));
    fputc('F',fp);
    printf("%ld\n",ftell(fp));
    fputs("ish\n",fp);
    printf("%ld\n",ftell(fp));
    fputs("woshinibaba",fp);
    printf("%ld\n",ftell(fp));
    rewind(fp);//将位置指示器重新移到文件开始处（0）
    printf("after rewind:%ld\n",ftell(fp));
    fputs("Hellodffd",fp);
    printf("%ld\n",ftell(fp));
    fclose(fp);
    system("pause");
}
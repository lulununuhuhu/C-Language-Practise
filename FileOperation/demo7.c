/*
文件流分为标准输入流（stdin），标准输出流（stdout），标准错误输出流（stderr）

错误指示器——ferror
使用clearerr函数可以人为的清除文件末尾指示器和错误指示器的状态
ferror只能检测是否出错，但无法检测出错的原因。大多数系统函数在出错时会将出错原因写在errno中
*/
#include "stdlib.h"
#include "stdio.h"

int main(void)
{
    FILE *fp;
    int ch;
    if ((fp = fopen("lines.txt","r")) == NULL)
    {
        fputs("文件打开失败!\n",stderr);
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
        fputs("无法写入!\n",stderr);
    }
    clearerr(fp);
    if ((!feof(fp))&&(!ferror(fp)))
    {
        printf("feof和ferror为零。\n");
    }
    
    fclose(fp);
    system("pause");
}
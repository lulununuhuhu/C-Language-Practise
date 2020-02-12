/*
ferror只能检测是否出错，但无法检测出错的原因。大多数系统函数在出错时会将出错原因写在errno中
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
        printf("打开失败,原因是:%d\n",errno);
        perror("打开失败,原因是");//perror可以直观的打印出错误原因
        fprintf(stderr,"震惊！出错的原因竟然是%s\n",strerror(errno));
        //exit(EXIT_FAILURE);
    }
    fclose(fp);
    system("pause");
}
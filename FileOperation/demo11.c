#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80]={0};
    char buffer[80] = {0};
    FILE *fp;
    if ((fp = fopen("text.txt","w+")) == NULL)
    {
        printf("打开文件失败!\n");
        exit(EXIT_FAILURE);
    }
    do
    {
        printf("Please enter a string:");
        gets(str);
        strcat(str,"\n");//在str后面添加\n
        fputs(str,fp);  
    } while (*str!='\n');
    rewind(fp);//重置文件指针
    while (!feof(fp))
    {
        fgets(buffer,80-1,fp);
        printf("%s",buffer);
    }
    fclose(fp);
    system("pause");
}
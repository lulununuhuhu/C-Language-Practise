/*
fgets函数用于从指定文件中读取字符串，fgets函数最多可以读取size-1个字符，因为结尾处会自动添加一个字符串结束符'\0'。当读取到换行符('\n')
或文件结束符EOF时，表示结束读取('\n')

fputs函数用于将一个字符串写入到指定的文件中，表示字符串结尾的'\0'不会被一并写入。函数调用成功则返回非0值，如果失败则返回EOF
*/

#include "stdio.h"
#include "stdlib.h"

#define Max 1024

int main(void)
{
    FILE *fp;
    char Buffer[Max];
    if ((fp = fopen("G:\\哈哈.txt","w")) == NULL)
    {
        printf("打开文件失败!\n");
        exit(EXIT_FAILURE);
    }
    fputs("Line one:Hello world!\n",fp);
    fputs("Line two:Hello lucheng!\n",fp);
    fputs("Line three:I love FishC.com!\n",fp);
   // fputs("雨下整夜我的爱溢出就像雨水.",fp);
    fclose(fp);
    if ((fp = fopen("G:\\哈哈.txt","r")) == NULL)
    {
        printf("打开文件失败!\n");
        exit(EXIT_FAILURE);
    }
    while (!feof(fp))//feof：检测流上的文件结束符,遇到文件结束符，值为非零，否则为0
    {
        fgets(Buffer,Max,fp);//fgets函数第一个参数是字符型指针指向存放读取字符串的位置，第二个参数是指定读取的字符数,第三个就是FILE对象指针
    }
    printf("%s",Buffer);
    fclose(fp);
    system("pause");
}
//第三个字符串打印两次的原因：如果在读取字符的过程中遇到 EOF，则 eof 指示器被设置；如果还没读入任何字符就遇到这种 EOF，
//则 s 参数指向的位置保持原来的内容，函数返回 NULL
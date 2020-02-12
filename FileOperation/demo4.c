/*
二进制读取文件 
*/
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct Date
{
    int year;
    int month;
    int day;
};
struct Book
{
    char name[40];
    char author[40];
    char publisher[40];
    struct Date date;
};

int main(void)
{
    FILE *fp;
    struct Book *book_for_write,*book_for_read;
    book_for_read = (struct Book*)malloc(sizeof(struct Book));
    book_for_write = (struct Book*)malloc(sizeof(struct Book));
    if (book_for_write == NULL || book_for_read ==NULL)
    {
        printf("内存分配失败!\n");
        exit(EXIT_FAILURE);
    }
    
    if ((fp = fopen("file.txt","wb")) == NULL)
    {
        printf("打开文件失败!\n");
        exit(EXIT_FAILURE);
    }
    strcpy(book_for_write->name,"《钢铁是怎样炼成的》");
    strcpy(book_for_write->author,"小甲鱼");
    strcpy(book_for_write->publisher,"清华大学出版社");
    book_for_write->date.year = 2019;
    book_for_write->date.month = 9;
    book_for_write->date.day = 30;
    // if ((fp =  fopen("file.txt","w"))== NULL)
    // {
    //     printf("打开文件失败！\n");
    //     exit(EXIT_FAILURE);
    // }
    fwrite(book_for_write,sizeof(struct Book),1,fp);//该函数把二进制数据写入文件.ptr是待写入数据块地址，size是待写入数据块大小，
                                                    //nmemb是待写入数据块数量，fp是待写入文件
    fclose(fp);
    if ((fp = fopen("file.txt","r")) == NULL)
    {
        printf("打开文件失败!\n");
        exit(EXIT_FAILURE);
    }
    fread(book_for_read,sizeof(struct Book),1,fp);//该函数读取被fwrite()写入文件的数据
    printf("书名:%s\n",book_for_read->name);
    printf("作者:%s\n",book_for_read->author);
    printf("出版社:%s\n",book_for_read->publisher);
    printf("出版日期:%d-%d-%d",book_for_read->date.year,book_for_read->date.month,book_for_read->date.day);
    fclose(fp);
    system("pause");
}
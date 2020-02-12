#include "stdio.h"
#include "stdlib.h"

struct Date
{
    int year;
    int month;
    int day;
};

struct Book
{
    char title[128];
    char author[40];
    float price;
    struct Date date;
    char publisher[40];
}book;

int main(void)
{
        // printf("请输入书名:");
        // scanf("%s",&book.title);
        // printf("请输入作者:");
        // scanf("%s",&book.author);
        // printf("请输入售价：");
        // scanf("%f",&book.price);
        // printf("请输入出版日期:");
        // scanf("%d",&book.date);
        // printf("请输入出版社:");
        // scanf("%s",&book.publisher);
        struct Book book = {
            "<带你学c带你飞>",
            "小甲鱼",
            45.0,
            {1997,06,21},
            "清华大学出版社"
        };
        printf("\n=======================\n");
        printf("书名:%s\n",book.title);
        printf("作者:%s\n",book.author);
        printf("价钱:%f\n",book.price);
        printf("出版日期:%d-%d-%d\n",book.date.year,book.date.month,book.date.day);
        printf("出版社:%s\n",book.publisher);
        system("pause");
        return 0;
}

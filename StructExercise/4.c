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
        // printf("����������:");
        // scanf("%s",&book.title);
        // printf("����������:");
        // scanf("%s",&book.author);
        // printf("�������ۼۣ�");
        // scanf("%f",&book.price);
        // printf("�������������:");
        // scanf("%d",&book.date);
        // printf("�����������:");
        // scanf("%s",&book.publisher);
        struct Book book = {
            "<����ѧc�����>",
            "С����",
            45.0,
            {1997,06,21},
            "�廪��ѧ������"
        };
        printf("\n=======================\n");
        printf("����:%s\n",book.title);
        printf("����:%s\n",book.author);
        printf("��Ǯ:%f\n",book.price);
        printf("��������:%d-%d-%d\n",book.date.year,book.date.month,book.date.day);
        printf("������:%s\n",book.publisher);
        system("pause");
        return 0;
}

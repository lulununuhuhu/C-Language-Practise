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
    char bookname[40];
    char author[40];
    float price;
    struct Date date;
};

void GetInput(struct Book *book);
void PrintData(struct Book*book);

void GetInput(struct Book *book)
{
    printf("请输入书名:");
    scanf("%s",book->bookname);
    printf("请输入作者:");
    scanf("%s",book->author);
    printf("请输入价格:");
    scanf("%f",&book->price);
    printf("请输入出版日期:");
    scanf("%d-%d-%d",&book->date.year,&book->date.month,&book->date.day);
}
void PrintData(struct Book *book)
{
    printf("%s\n",book->bookname);
    printf("%s\n",book->author);
    printf("%f\n",book->price);
    printf("%d-%d-%d\n",book->date.year,book->date.month,book->date.day);
}

int main(void)
{
    struct Book *a;
    a = (struct Book *)malloc(sizeof(struct Book));//分配内存
    if (a == NULL)
    {
        printf("内存分配失败\n");
        exit(1);
    }
    
    GetInput(a);
    printf("\n=============信息已打印好===========\n");
    PrintData(a);
    free(a);//释放内存
    system("pause");
}

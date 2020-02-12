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
    printf("����������:");
    scanf("%s",book->bookname);
    printf("����������:");
    scanf("%s",book->author);
    printf("������۸�:");
    scanf("%f",&book->price);
    printf("�������������:");
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
    a = (struct Book *)malloc(sizeof(struct Book));//�����ڴ�
    if (a == NULL)
    {
        printf("�ڴ����ʧ��\n");
        exit(1);
    }
    
    GetInput(a);
    printf("\n=============��Ϣ�Ѵ�ӡ��===========\n");
    PrintData(a);
    free(a);//�ͷ��ڴ�
    system("pause");
}

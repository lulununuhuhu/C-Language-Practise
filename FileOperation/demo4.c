/*
�����ƶ�ȡ�ļ� 
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
        printf("�ڴ����ʧ��!\n");
        exit(EXIT_FAILURE);
    }
    
    if ((fp = fopen("file.txt","wb")) == NULL)
    {
        printf("���ļ�ʧ��!\n");
        exit(EXIT_FAILURE);
    }
    strcpy(book_for_write->name,"���������������ɵġ�");
    strcpy(book_for_write->author,"С����");
    strcpy(book_for_write->publisher,"�廪��ѧ������");
    book_for_write->date.year = 2019;
    book_for_write->date.month = 9;
    book_for_write->date.day = 30;
    // if ((fp =  fopen("file.txt","w"))== NULL)
    // {
    //     printf("���ļ�ʧ�ܣ�\n");
    //     exit(EXIT_FAILURE);
    // }
    fwrite(book_for_write,sizeof(struct Book),1,fp);//�ú����Ѷ���������д���ļ�.ptr�Ǵ�д�����ݿ��ַ��size�Ǵ�д�����ݿ��С��
                                                    //nmemb�Ǵ�д�����ݿ�������fp�Ǵ�д���ļ�
    fclose(fp);
    if ((fp = fopen("file.txt","r")) == NULL)
    {
        printf("���ļ�ʧ��!\n");
        exit(EXIT_FAILURE);
    }
    fread(book_for_read,sizeof(struct Book),1,fp);//�ú�����ȡ��fwrite()д���ļ�������
    printf("����:%s\n",book_for_read->name);
    printf("����:%s\n",book_for_read->author);
    printf("������:%s\n",book_for_read->publisher);
    printf("��������:%d-%d-%d",book_for_read->date.year,book_for_read->date.month,book_for_read->date.day);
    fclose(fp);
    system("pause");
}
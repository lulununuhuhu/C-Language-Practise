/*
�ڵ�����ͷ���в���Ԫ��
*/
#include "stdlib.h"
#include "stdio.h"
struct Book
{
    char title[128];
    char author[40];
    struct Book *next;
};

void getInput(struct Book *book)
{
    printf("����������:");
    scanf("%s",book->title);
    printf("����������:");
    scanf("%s",book->author);
}

void addBook(struct Book **library)//ָ���ָ�룬ָ��ṹ���е�ָ��(headָ��),ͨ������������ʽ�޸�ָ���ַ��һ��ʹ�ö���ָ��
{
    struct Book *book;
    struct Book *temp;
    book = (struct Book *)malloc(sizeof(struct Book));//����һ��book�ṹ���С���ڴ�ռ�
    if (book == NULL)
    {
        printf("�ڴ����ʧ��");
        exit(1);
    }
    getInput(book);  
    if (*library != NULL)
    {
        temp = *library;
        *library = (*library)->next;
        free(temp); 
    }
    else//library��һ���յĵ�����
    {
        *library = book;//*library��ͬ��������������struct Bookָ��
        book->next = NULL;
    }
}

void printLibrary(struct Book *library)
{
    struct Book *book;
    int count = 1;
    book = library;
    while (book)
    {
        printf("Book%d:",count);
        printf("����:%s\n",book->title);
        printf("����:%s\n",book->author);
        book = book->next;
        count++;
    } 
}

void releaseLibrary(struct Book **library)
{
    struct Book *temp;
    while (*library != NULL)
    {
        temp = *library;
        *library =(*library)->next;
    }
    
}

int main(void)
{
    struct  Book *library = NULL;
    int ch;
    while (1)
    {
        printf("�����Ƿ���Ҫ¼���鼮��Ϣ(Y/N):");
        do
        {
            ch = getchar();
        }while(ch != 'Y'&&ch != 'N');
        if (ch =='Y')
        {
            addBook(&library);
        }
        else
        {
            break;
        }      
    }
    printf("�����Ƿ���Ҫ��ӡ�鼮��Ϣ(Y/N):");
        do
        {
            ch = getchar();
        }while(ch != 'Y'&&ch != 'N');
        if (ch =='Y')
        {
            printLibrary(library);
        }
        else
        {
            releaseLibrary(&library);
        }
    system("pause");     
}
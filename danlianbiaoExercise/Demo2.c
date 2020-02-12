/*
�ڵ�����β������Ԫ��
*/
#include "stdlib.h"
#include "stdio.h"

struct Book
{
    char author[40];
    char title[40];
    struct Book *next;
};

void getInput(struct Book *book)
{
    printf("����������:");
    scanf("%s",book->title);
    printf("����������:");
    scanf("%s",book->author);
}

void addBook(struct Book **library)
{
    struct Book *book,*temp;
    book = (struct Book *)malloc(sizeof(struct Book));
    if (book == NULL)
    {
        printf("�ڴ����ʧ��.\n");
        exit(1);
    }
    getInput(book);
    if (*library !=NULL)
    {
        temp = *library;
        //��λ�������β��λ��
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        //��������
        temp->next = book;
        book ->next = NULL;
    }
    else
    {
        *library = book;
        book ->next = NULL;
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
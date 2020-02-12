/*
����������:�Ե���������������������ȶԵ�������б�����Ȼ�󽫱����������������Ƚ�
*/

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct Book
{
    char title[128];
    char author[40];
    struct Book *next;
};

struct Book *searchBook(struct Book *library,char *target)
{
    struct Book *book;
    book = library;
    while (book != NULL)
    {
        if(!strcmp(book->author,target) || !strcmp(book->title,target))
        {
            break;
        }
        book = book ->next;
    }
    return book;
}

void printBook(struct Book *book)
{
    printf("����:%s\n",book->title);
    printf("����:%s\n",book->author);
}
void getInput(struct Book *book)
{
    printf("����������:");
    scanf("%s",book->title);
    printf("����������:");
    scanf("%s",book->author);
}

void addBook(struct Book **library)
{
    struct Book *book;
    static struct Book *tail;//��Ϊָ�����һ��������ڵ��ָ��
    book = (struct Book *)malloc(sizeof(struct Book));
    if (book == NULL)
    {
        printf("�ڴ����ʧ��.\n");
        exit(1);
    }
    getInput(book);
    if (*library !=NULL)
    {
        tail ->next = book;
        book ->next = NULL;
    }
    else
    {
        *library = book;
        book ->next = NULL;
    }
    tail = book;
    
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
    struct Book * book;
    int ch;
    char  input[128];
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
        printf("\n����������������:");
        scanf("%s",input);
        book = searchBook(library,input);
        if(book == NULL)
        {
            printf("�ܱ�Ǹ,û���ҵ�\n");
        }
        else
        {
            printf("���ҵ�����������ͼ��...\n");
            do
            {
                printBook(book);
            } while ((book = searchBook(book->next,input)) != NULL);           
        }
        releaseLibrary(&library);

    system("pause");     
}
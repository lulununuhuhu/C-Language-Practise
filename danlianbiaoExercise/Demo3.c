/*
搜索单链表:对单链表进行搜索操作，首先对单链表进行遍历，然后将遍历结果与输入结果相比较
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
    printf("书名:%s\n",book->title);
    printf("作者:%s\n",book->author);
}
void getInput(struct Book *book)
{
    printf("请输入书名:");
    scanf("%s",book->title);
    printf("请输入作者:");
    scanf("%s",book->author);
}

void addBook(struct Book **library)
{
    struct Book *book;
    static struct Book *tail;//作为指向最后一个单链表节点的指针
    book = (struct Book *)malloc(sizeof(struct Book));
    if (book == NULL)
    {
        printf("内存分配失败.\n");
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
        printf("书名:%s\n",book->title);
        printf("作者:%s\n",book->author);
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
        printf("请问是否需要录入书籍信息(Y/N):");
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
    printf("请问是否需要打印书籍信息(Y/N):");
        do
        {
            ch = getchar();
        }while(ch != 'Y'&&ch != 'N');
        if (ch =='Y')
        {
            printLibrary(library);
        }
        printf("\n请输入书名或作者:");
        scanf("%s",input);
        book = searchBook(library,input);
        if(book == NULL)
        {
            printf("很抱歉,没能找到\n");
        }
        else
        {
            printf("已找到符合条件的图书...\n");
            do
            {
                printBook(book);
            } while ((book = searchBook(book->next,input)) != NULL);           
        }
        releaseLibrary(&library);

    system("pause");     
}
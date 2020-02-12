/*
在单链表尾部插入元素
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
    printf("请输入书名:");
    scanf("%s",book->title);
    printf("请输入作者:");
    scanf("%s",book->author);
}

void addBook(struct Book **library)
{
    struct Book *book,*temp;
    book = (struct Book *)malloc(sizeof(struct Book));
    if (book == NULL)
    {
        printf("内存分配失败.\n");
        exit(1);
    }
    getInput(book);
    if (*library !=NULL)
    {
        temp = *library;
        //定位单链表的尾部位置
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        //插入数据
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
    int ch;
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
        else
        {
            releaseLibrary(&library);
        }
    system("pause");     
}
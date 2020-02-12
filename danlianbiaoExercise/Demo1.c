/*
在单链表头部中插入元素
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
    printf("请输入书名:");
    scanf("%s",book->title);
    printf("请输入作者:");
    scanf("%s",book->author);
}

void addBook(struct Book **library)//指针的指针，指向结构体中的指针(head指针),通过函数参数形式修改指针地址，一般使用二级指针
{
    struct Book *book;
    struct Book *temp;
    book = (struct Book *)malloc(sizeof(struct Book));//申请一个book结构体大小的内存空间
    if (book == NULL)
    {
        printf("内存分配失败");
        exit(1);
    }
    getInput(book);  
    if (*library != NULL)
    {
        temp = *library;
        *library = (*library)->next;
        free(temp); 
    }
    else//library是一个空的单链表
    {
        *library = book;//*library等同于主函数声明的struct Book指针
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
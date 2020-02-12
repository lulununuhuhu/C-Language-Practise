/*
单链表在表中插入或删除某个元素时，比在数组中插入某个元素的效率高。
本Demo示例演示在单链表中插入或删除某个节点
*/
#include "stdio.h"
#include "stdlib.h"

void insertNode(struct Node **head ,int value);
void printNode(struct Node *head);
void deleteNode(struct Node **head,int input);


struct Node //Node结构体可以抽象成单链表中的一个节点
{
    int value;//节点值
    struct Node *next;//指向下一个节点的指针  
};

void deleteNode(struct Node **head,int value)
{
    struct Node *previous;
    struct Node *current;
    current = *head;
    previous = NULL;
    while (current != NULL && current->value !=value)
    {
        previous = current;
        current = current->next;
    }
    if (current == NULL)
    {
        printf("找不到匹配的节点!\n");
        return;
    }
    else
    {
        if (previous == NULL)
        {
            *head = current->next;
        }
        else
        {
            previous->next = current->next;
        }
        free(current);
    } 
}

void insertNode(struct Node **head ,int value)
{
    struct Node *previous;//当前选中的前一个节点
    struct Node *current;//当前选中的节点
    struct Node *add;//要插入的节点

    current = *head;
    previous = NULL;
    while (current != NULL && current->value < value)
    {
        previous = current;
        current = current->next;
    }
    add = (struct Node *)malloc(sizeof(struct Node));
    if (add == NULL)
    {
        printf("内存分配失败!\n");
        exit(1);
    }
    add->value = value;
    add->next = current;
    if (previous == NULL)
    {
        *head = add;
    }
    else
    {
        previous->next = add;
    }   
}

void printNode(struct Node *head)
{
    struct Node *current;
    current = head;
    while (current != NULL)
    {
        printf("%5d",current->value);
        current = current->next;
    }
    putchar('\n');
}

int main(void)
{
    struct Node *head = NULL;
    int input;
    while (1)
    {
        printf("请输入一个整数(输入-1表示结束)");
        scanf("%d",&input);
        if (input == -1)
        {
            break;
        }  
        insertNode(&head,input);
        printNode(head);    
    }
    while(1)
    {
        printf("输入你想删除的数(输入-1表示结束):");
        scanf("%d",&input);
        if (input == -1)
        {
            break;
        }
        deleteNode(&head,input);
        printNode(head);
    }
    system("pause");
}
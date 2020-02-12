/*
�������ڱ��в����ɾ��ĳ��Ԫ��ʱ�����������в���ĳ��Ԫ�ص�Ч�ʸߡ�
��Demoʾ����ʾ�ڵ������в����ɾ��ĳ���ڵ�
*/
#include "stdio.h"
#include "stdlib.h"

void insertNode(struct Node **head ,int value);
void printNode(struct Node *head);
void deleteNode(struct Node **head,int input);


struct Node //Node�ṹ����Գ���ɵ������е�һ���ڵ�
{
    int value;//�ڵ�ֵ
    struct Node *next;//ָ����һ���ڵ��ָ��  
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
        printf("�Ҳ���ƥ��Ľڵ�!\n");
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
    struct Node *previous;//��ǰѡ�е�ǰһ���ڵ�
    struct Node *current;//��ǰѡ�еĽڵ�
    struct Node *add;//Ҫ����Ľڵ�

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
        printf("�ڴ����ʧ��!\n");
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
        printf("������һ������(����-1��ʾ����)");
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
        printf("��������ɾ������(����-1��ʾ����):");
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
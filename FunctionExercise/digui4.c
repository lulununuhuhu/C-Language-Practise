/*
��ŵ����Ϸ
*/
#include "stdio.h"
#include "stdlib.h"

void hanoi(int n,char x,char y,char z);
void hanoi(int n,char x,char y,char z)
{
    static int count = 0;
    if (n==1)
    {
        printf("%c -->%c\n",x,z);
        count++;
        printf("�ܹ���Ҫ����%d��\n",count);
    }
    else
    {
        hanoi(n-1,x,z,y);
        printf("%c -->%c\n",x,z);
        count++;
        hanoi(n-1,y,x,z);
    }
    
}
int main(void)
{
    int n;
    printf("�����뺺ŵ���Ĳ���:");
    scanf("%d",&n);
    hanoi(n,'X','Y','Z');
    system("pause");
}
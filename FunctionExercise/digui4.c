/*
汉诺塔游戏
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
        printf("总共需要搬运%d次\n",count);
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
    printf("请输入汉诺塔的层数:");
    scanf("%d",&n);
    hanoi(n,'X','Y','Z');
    system("pause");
}
#include "stdlib.h"
#include "stdio.h"
int main(void)
{
    int a[10];
    int *p;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    p =a;
    for (int i=0 ; i <10; i++)
    {
        printf("%d",*(p+i));
        printf("%d",*(a+i));
    } 
    system("pause");
}
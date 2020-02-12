#include "stdio.h"
#include "stdlib.h"
void swap(int *p1, int *p2,int *p3)
{
    int temp;
    if(*p1<*p2)
    {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
    if (*p1<*p3)
    {
        temp = *p1;
        *p1 = *p3;
        *p3 = temp;
    }
    if (*p2<*p3)
    {
        temp = *p2;
        *p2 = *p3;
        *p3 = temp;
    }   
}
int main (void)
{
    int *p1_a,*p2_b,*p3_c;
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    p1_a = &a;
    p2_b = &b;
    p3_c = &c;
    swap(p1_a,p2_b,p3_c);
    printf("排序后的值是%d,%d,%d",*p1_a,*p2_b,*p3_c);
    system("pause");
    return 0;
}
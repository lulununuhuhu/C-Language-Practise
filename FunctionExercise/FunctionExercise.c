#include "stdio.h"
#include "stdlib.h"
int sum(int n);
int main (void)
{
    int n,result;
    printf("ÊäÈënµÄÖµ:");
    scanf("%d",&n);
    result = sum(n);
    printf("1+2+3+4+5+6+7+...+n=%d",result);
    system("pause");
}

int sum (int n)
{
    int s = 0;
    // for (int i = 1; i < n+1; i++)
    // {
    //     s += i;
    // }
    // return s;
    while ((n--)>0);
    {
        s+=n;   
    } 
    return s;
}
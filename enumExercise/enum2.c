#include "stdio.h"
#include "stdlib.h"
int main (void)
{
    enum body{
        a,b,c,d
    }month[31],j;
    int i;
    j=a;
    for ( i = 1; i <= 30; i++)
    {
        month[i] = j;
        printf("%2d\t",month[i]);
        j++;
        if (j>d)
        {
            j=a;
        }      
    }
    for ( i = 1; i <=30; i++)
    {
        switch (month[i])
        {
        case a:
            printf("%2d %c\t",i,'a');
            break;
        case b:
            printf("%2d %c\t",i,'b');
            break;
        case c:
            printf("%2d %c\t",i,'c');
            break;
        case d:
            printf("%2d %c\t",i,'d');
            break;
        default:
            break;
        }
    }
    printf("\n");
    system("pause");
}
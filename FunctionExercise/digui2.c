#include "stdio.h"
#include "stdlib.h"
void recursion(void);
void recursion(void)
{
    static int count = 10;
    printf("lucheng\n");
    if(--count)
    {
        recursion();
    }
}

int main(void)
{
    recursion();
    system("pause");
}
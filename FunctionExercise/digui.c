#include "stdio.h"
#include "stdlib.h"
void up_and_down(int);
void up_and_down(int n)
{
    printf("Level %d:n location %p\n",n,&n);
    if(n<4)
        up_and_down(n+1);
    printf("LEVEL %d:n location %p\n",n,&n);
}

int main(void)
{
    up_and_down(1);
    system("pause");
}
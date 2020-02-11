#include "stdio.h"
#include "stdlib.h"
int main(void)
{
    int guess = 1;
    printf("Pick an integer from 1 to 100.I will try to guess.\n");
    printf("respond with a y if my guess is right and with a n if it is wrong\n");
    printf("Um...is your number is %d\n",guess);
    while (getchar()!='y')
    {
        printf("is your number is %d\n",++guess);
        while (getchar() !='\n')
        {
            continue;
        }
        printf("sadasd\n");
    }
    printf("I knew I could do it.\n");
    system("pause");
}
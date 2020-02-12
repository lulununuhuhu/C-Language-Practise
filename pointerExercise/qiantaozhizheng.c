#include "stdlib.h"
#include "stdio.h"
int main(void)
{
    int num = 520;
    int *p = &num;
    int **pp = &p;
    printf("指针的值是%d\n",*p);
    printf("指向指针的指针是%d\n",**pp);
    printf("&p:%p,pp:%p\n",&p,pp);
    printf("&num:%p,p:%p,*pp:%p\n",&num,p,*pp);
    system("pause");
}
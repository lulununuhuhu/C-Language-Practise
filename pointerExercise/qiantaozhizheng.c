#include "stdlib.h"
#include "stdio.h"
int main(void)
{
    int num = 520;
    int *p = &num;
    int **pp = &p;
    printf("ָ���ֵ��%d\n",*p);
    printf("ָ��ָ���ָ����%d\n",**pp);
    printf("&p:%p,pp:%p\n",&p,pp);
    printf("&num:%p,p:%p,*pp:%p\n",&num,p,*pp);
    system("pause");
}
#include "stdlib.h"
#include "stdio.h"
//��ָ�븴��һ���ַ���
main (void){
    char a[] = "I Love You So Much!",b[40];
    char *p1 ,*p2;
    p1 = a;
    p2 = b;
    for ( ; *p1 !='\0'; p1++,p2++)
    {
        *p2 = *p1;
    }
    *p2 = '\0';//��������ַ���������
    printf("a[] is %s\n",a);
    printf("b[] is %s\n",b);
    system("pause");
}
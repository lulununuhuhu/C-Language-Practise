#include "stdlib.h"
#include "stdio.h"
//用指针复制一个字符串
main (void){
    char a[] = "I Love You So Much!",b[40];
    char *p1 ,*p2;
    p1 = a;
    p2 = b;
    for ( ; *p1 !='\0'; p1++,p2++)
    {
        *p2 = *p1;
    }
    *p2 = '\0';//必须加上字符串结束符
    printf("a[] is %s\n",a);
    printf("b[] is %s\n",b);
    system("pause");
}
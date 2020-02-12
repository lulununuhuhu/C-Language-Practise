#include <stdlib.h>
#include <stdio.h>

int main()
{
    char *a = "Hello my sunshine";
    char b[20] = "";
    char *pb;
    pb = b;
    for ( ; *a!='\0'; a++,pb++)
    {
        *pb = *a;
    }
    *pb = '\0';
    for (int i=0;b[i]!='\0' ; i++)
    {
        printf("%c",b[i]);
    }
    printf("\n");
    printf("b的地址是%p,b[16]的地址是%p,pb的地址是%p\n",b,&b[16],pb);//pb的地址已经移到了b字符串地址之后
    printf("b = %s\n",b);
    system("pause");
}
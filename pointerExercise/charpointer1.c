#include "stdlib.h"
#include "stdio.h"
#include "string.h"
int main(void)
{
    char *string = "I love Fishc.com!";
    char* string1 ; 
    int count;
    while (*(string++) !='\0' )
    {
        count++;
    }
    // for (int i = 0; i < count; i++)
    // {
    //     *(string1+i) = *(string+i);
    // }
     
    printf("һ����%d %d���ַ���\n",count,strlen(string));
    printf("string:%s\n",string);
    system("pause");
}
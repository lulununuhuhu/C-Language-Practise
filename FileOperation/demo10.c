#include "stdio.h"
#include "stdlib.h"
#include <string.h>
int main(void)
{
    FILE *fp;
    char data[1024] ;
    if ((fp = fopen("G:\\����.txt","r")) == NULL)
    {
        printf("�ļ���ʧ��!");
        exit(EXIT_FAILURE);
    }
    while (!feof(fp))
    {
        fgets(data+strlen(data),1024,fp);
    }
    printf("%s\n",data);
    
    // fread(data,1024,1,fp);
    // for (int i = 0; i < 1024; i++)
    // {
    //     printf("0x%2x  ",*(data+i));
    // }
    fclose(fp);
    system("pause");
}
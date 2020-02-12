#include "stdio.h"
#include "stdlib.h"

main (void)
{
    struct student
    {       
        char a;
        char b;
        int  c;
        char d[4];
    }student1 = {'a','s',4,"ad"};
    printf("size of student1 = %d,size of d = %d",sizeof(student1),sizeof(student1.d));//结构体中数据按照定义位置，依次存放，但内存会按数据类型的字节进行对齐
                                                                                       //这个结构体中内存字节为（1+1+2）+4+4 = 12；

    struct okbeng
    {       
        char b;
        int c;
        char a;
        char d[4];
    }student2 = {4,'s','4',"add"};
    printf("size of student2 = %d,size of d = %d",sizeof(student2),sizeof(student2.d));//这个结构体中内存字节是(1+3)+4+(1+3)+4 = 16;
    system("pause");
}
/*用结构体变量名作为函数的参数*/
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct student
{
    char name[20];
    int num;
    float score[3];
};
void print(struct student);//用指向结构体变量的指针作为实参 void print (struct student*);
main (void)
{
    struct student stu;
    stu.num=8;
    strcpy(stu.name,"fishc.com");
    stu.score[0] =95.5;
    stu.score[1] = 95;
    stu.score[2] = 55;
    print(stu);//用结构体变量做实参    //用指向结构体变量的指针作为实参 print(&stu);
   getchar();
}

void print(struct student stu)//用指向结构体变量的指针作为实参 void print(struct *p)
{
    printf("\tnum       :%d\n",stu.num);
    printf("\tname      :%s\n",stu.name);
    printf("\tscore_1   :%5.2f\n",stu.score[0]);
    printf("\tscore_2   :%5.2f\n",stu.score[1]);
    printf("\tscore_3   :%5.2f\n",stu.score[2]);
    printf("\n");
}
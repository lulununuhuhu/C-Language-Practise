  /* 
  通过结构体指针访问结构体成员有两种方法：
  1、(*结构体指针).成员名
  2、结构体指针->成员名
  */
#include "stdlib.h"
#include "stdio.h"

struct  stu //stu：结构体名称
{
    int num;
    char *name;
    char sex;
    float score;
}boy1 ={23,"lucheng",'M',99}; //boy1:结构体变量名,属于全局变量

main (void)
{
    struct stu *stu1;
    stu1 = &boy1;
    printf("Name=%s\nNum=%d\n",boy1.name,boy1.num);
    printf("Sex=%d\nScore=%f\n",boy1.sex,boy1.score);

    printf("Name=%s\nNum=%d\n",stu1->name,stu1->num);
    printf("Sex=%d\nScore=%f\n",stu1->sex,stu1->score);

    printf("Name=%s\nNum=%d\n",(*stu1).name,(*stu1).num);
    printf("Sex=%d\nScore=%f\n",(*stu1).sex,(*stu1).score);
    system("pause");
}
/*
使用指针数组和指向指针的指针：1、可以避免重复分配内存2、只需要进行一处修改
*/
#include "stdlib.h"
#include "stdio.h"
int main()
{
    char *cBooks[] = {
        "<c程序设计语言>",
        "<c专家编程>",
        "<c和指针>",
        "<c陷阱与缺陷>",
        "<C Primer Plus>",
        "<带你学C带你飞>"
    };
    char **byFishC;
    char **jiayuLoves[4];
    byFishC = &cBooks[5];//byFishC就是指向指针数组的指针
    jiayuLoves[0] = &cBooks[0];
    jiayuLoves[1] = &cBooks[1];
    jiayuLoves[2] = &cBooks[2];
    jiayuLoves[3] = &cBooks[3];
    printf("FishC出版的图书有:%s\n",*byFishC);
    printf("小甲鱼喜欢的图书有:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n",*jiayuLoves[i]);
    }
    
    system("pause");
}
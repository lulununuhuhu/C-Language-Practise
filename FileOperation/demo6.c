/*
fseek函数用法:用于设置文件流的位置指示器
*/
#include "stdio.h"
#include "stdlib.h"

#define N 4

struct Stu
{
    char Name[40];
    int num;
    float score;
}stu[N],sb;

int main(void)
{
    FILE *fp;
    if ((fp = fopen("sorce.txt","wb")) == NULL)
    {
        printf("打开文件失败!\n");
        exit(EXIT_FAILURE);
    }
    printf("将成绩录入文件中(格式 姓名 学号 分数):\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%s %d %f",stu[i].Name,&stu[i].num,&stu[i].score);
    }
    fwrite(stu,sizeof(struct Stu),N,fp);//fwrite函数用于将数据以二进制形式写入文件中
    fclose(fp);
    if ((fp = fopen("sorce.txt","rb")) == NULL)
    {
        printf("打开文件失败!\n");
        exit(EXIT_FAILURE);
    }
    fseek(fp,sizeof(struct Stu),SEEK_SET);//从文件开始处前移一个Stu结构体大小的距离
    fread(&sb,sizeof(struct Stu),1,fp);//读取由fwrite函数写入文件的数据.sb是待读取文件数据在内存中的地址
    printf("%s(学号:%d)的成绩是:%.2f.\n",sb.Name,sb.num,sb.score);
    fclose(fp);
    system("pause");
}
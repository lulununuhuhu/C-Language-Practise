/*
函数原型:void *realloc(void *ptr,size_t size);
1:如果新分配的内存空间比原来的大，则旧内存块的数据不会发生改变；如果新的内存空间大小小于旧的内存空间，可能会导致数据丢失，慎用
2、该函数将移动内存空间的数据并返回新的指针
3、如果ptr参数为NULL，那么调用该函数就相当于调用malloc（size）
4、如果size参数为0，并且ptr参数不为NULL，那么调用该函数就相当于调用free（ptr）
5、除非ptr参数为NULL，否则ptr的值必须由先前调用malloc、calloc或realloc函数返回
*/
#include "stdio.h"
#include "stdlib.h"

// int main(void)
// {
//     int count,num;
//     int *ptr = NULL;
//     do
//     {
//         printf("请输入一个数（输入-1表示结束）:");
//         scanf("%d",&num);
//         count++;
//         ptr = (int *)realloc(ptr,count*sizeof(int));
//         if (ptr == NULL)
//         {
//             exit(1);
//         }
//         ptr[count-1] = num;
//     } while (num !=-1);

//     printf("总共输入了%d个数,输入的数分别是：",count);
//     for (int i = 0; i < count; i++)
//     {
//         printf("%3d",ptr[i]);
//     }
//     putchar('\n');
//     free(ptr);
//     system("pause");
//     return 0;
// }




int main(void)
{
    int num,count;
    int *ptr = NULL;
    do
    {
        printf("请输入数值(输入-1表示结束):");
        scanf("%d",&num);
        count++;
        ptr = (int *)realloc(ptr,count*sizeof(int));
        if (ptr == NULL)
        {
            printf("内存分配失败!");
            exit(1);
        }
        ptr[count-1] = num;
    } while (num !=-1 );
    for (int i = 0; i < count; i++)
    {
        printf("第%d个数是%d.\n",i+1,ptr[i]);
    }
    free(ptr);
    system("pause");
    return 0;
}
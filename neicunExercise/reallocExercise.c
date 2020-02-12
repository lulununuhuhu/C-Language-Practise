/*
����ԭ��:void *realloc(void *ptr,size_t size);
1:����·�����ڴ�ռ��ԭ���Ĵ�����ڴ������ݲ��ᷢ���ı䣻����µ��ڴ�ռ��СС�ھɵ��ڴ�ռ䣬���ܻᵼ�����ݶ�ʧ������
2���ú������ƶ��ڴ�ռ�����ݲ������µ�ָ��
3�����ptr����ΪNULL����ô���øú������൱�ڵ���malloc��size��
4�����size����Ϊ0������ptr������ΪNULL����ô���øú������൱�ڵ���free��ptr��
5������ptr����ΪNULL������ptr��ֵ��������ǰ����malloc��calloc��realloc��������
*/
#include "stdio.h"
#include "stdlib.h"

// int main(void)
// {
//     int count,num;
//     int *ptr = NULL;
//     do
//     {
//         printf("������һ����������-1��ʾ������:");
//         scanf("%d",&num);
//         count++;
//         ptr = (int *)realloc(ptr,count*sizeof(int));
//         if (ptr == NULL)
//         {
//             exit(1);
//         }
//         ptr[count-1] = num;
//     } while (num !=-1);

//     printf("�ܹ�������%d����,��������ֱ��ǣ�",count);
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
        printf("��������ֵ(����-1��ʾ����):");
        scanf("%d",&num);
        count++;
        ptr = (int *)realloc(ptr,count*sizeof(int));
        if (ptr == NULL)
        {
            printf("�ڴ����ʧ��!");
            exit(1);
        }
        ptr[count-1] = num;
    } while (num !=-1 );
    for (int i = 0; i < count; i++)
    {
        printf("��%d������%d.\n",i+1,ptr[i]);
    }
    free(ptr);
    system("pause");
    return 0;
}
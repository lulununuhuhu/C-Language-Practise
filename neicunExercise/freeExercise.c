/*
void free(void *ptr);
free�����ͷ�ptr����ָ����ڴ�ռ䡣���ڴ�ռ������malloc��calloc��realloc��������ģ�����ú���������δ������Ϊ��
���ptr������NULL����ִ���κβ�����
ע���ú����������޸�ptr������ֵ�����Ե��ú�����Ȼָ��ԭ���ĵط�����Ϊ�Ƿ��ռ䣩
*/
#include "stdio.h"
#include "stdlib.h"

int main()
{
    int *ptr;
    int num;
    ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("�ڴ����ʧ�ܣ�\n");
        exit(1);
    }
    printf("������һ������:");
    scanf("%d",ptr);
    ptr = &num;//��̬������ڴ�ָ����Ϊ�ֲ��������ڴ��ַ����ᶪʧ�ڴ��ַ�������ڴ�й©
    printf("�����������%d",*ptr);
    free(ptr);
    // printf("�����������%d",*ptr);
    system("pause");
}

/*
�ڴ�й©���������:1:��ʽ�ڴ�й©(�������ڴ��û�м�ʱʹ��free�����ͷ�)
                  2����ʧ�ڴ���ַ
*/
#include "stdlib.h"
#include "stdio.h"
int main()
{
    char *p1[5] = {"��̸ı�����","Just do it","��ջҵ���޹�","�뿪���Ժ�","��û�и�����"};//ָ������
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%s\n",p1[i]);
    }
    printf("%s","sada");
    system("pause");
        return 0;
}
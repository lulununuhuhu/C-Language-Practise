/*
ʹ��ָ�������ָ��ָ���ָ�룺1�����Ա����ظ������ڴ�2��ֻ��Ҫ����һ���޸�
*/
#include "stdlib.h"
#include "stdio.h"
int main()
{
    char *cBooks[] = {
        "<c�����������>",
        "<cר�ұ��>",
        "<c��ָ��>",
        "<c������ȱ��>",
        "<C Primer Plus>",
        "<����ѧC�����>"
    };
    char **byFishC;
    char **jiayuLoves[4];
    byFishC = &cBooks[5];//byFishC����ָ��ָ�������ָ��
    jiayuLoves[0] = &cBooks[0];
    jiayuLoves[1] = &cBooks[1];
    jiayuLoves[2] = &cBooks[2];
    jiayuLoves[3] = &cBooks[3];
    printf("FishC�����ͼ����:%s\n",*byFishC);
    printf("С����ϲ����ͼ����:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n",*jiayuLoves[i]);
    }
    
    system("pause");
}
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define SUN 0
#define MON 1
#define TUE 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6

// struct tm    time.h�⺯�����Ѷ������
// {
//     int tm_sec;//�룬��Χ��0~59
//     int tm_min;//�֣���Χ��0~59
//     int tm_hour;//ʱ����Χ��0~23
//     int tm_mday;//һ�����еĵڼ��죬��Χ��1~31
//     int tm_mon;//һ���еĵڼ����£���Χ��0`11
//     int tm_year;//��1900������ĵڼ���
//     int tm_wday;//���ڼ����������쿪ʼ���㣬��Χ��0~6
//     int tm_yday;//һ���еĵڼ��죬��Χ��0~365
//     int tm_isdst;//ָ���չ��Լʱ���Ƿ���Ч��������ʾ��Ч��0��ʾ����Ч��������ʾ����Ϣ������
// };

int main(void)
{
    struct tm*p;
    time_t t;
    time(&t);//time�������ڷ��شӱ�׼��ʱ�㵽��ǰʱ�������
    p = localtime(&t);//��һ��time_t���͵�ֵת���ɾ���ı���ʱ������ڣ����� 1970 �� 1 �� 1 �յ� UTC ʱ�� 0 ʱ 0 �� 0 ����������������������
    printf("������%d��%d��%d��%dʱ%d��%d��.\n",p->tm_year+1900,p->tm_mon+1,p->tm_mday,p->tm_hour,p->tm_min,p->tm_sec);
    switch (p->tm_wday)
    {
    case MON:
    case TUE:
    case WED:
    case THU:
    case FRI:
        printf("�ɻ�!T_T\n");
        break;
   case SAT:
   case SUN:
        printf("�ż�!^_^"); 
    default:
        printf("Error!\n");
        break;
    }
    system("pause");
}
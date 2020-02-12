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

// struct tm    time.h库函数中已定义好了
// {
//     int tm_sec;//秒，范围是0~59
//     int tm_min;//分，范围是0~59
//     int tm_hour;//时，范围是0~23
//     int tm_mday;//一个月中的第几天，范围是1~31
//     int tm_mon;//一年中的第几个月，范围是0`11
//     int tm_year;//自1900年往后的第几年
//     int tm_wday;//星期几，自星期天开始计算，范围是0~6
//     int tm_yday;//一年中的第几天，范围是0~365
//     int tm_isdst;//指定日光节约时间是否生效，正数表示生效，0表示不生效，负数表示该信息不可用
// };

int main(void)
{
    struct tm*p;
    time_t t;
    time(&t);//time函数用于返回从标准计时点到当前时间的秒数
    p = localtime(&t);//将一个time_t类型的值转换成具体的本地时间和日期，即从 1970 年 1 月 1 日的 UTC 时间 0 时 0 分 0 秒算起到现在所经过的秒数
    printf("现在是%d年%d月%d日%d时%d分%d秒.\n",p->tm_year+1900,p->tm_mon+1,p->tm_mday,p->tm_hour,p->tm_min,p->tm_sec);
    switch (p->tm_wday)
    {
    case MON:
    case TUE:
    case WED:
    case THU:
    case FRI:
        printf("干活!T_T\n");
        break;
   case SAT:
   case SUN:
        printf("放假!^_^"); 
    default:
        printf("Error!\n");
        break;
    }
    system("pause");
}
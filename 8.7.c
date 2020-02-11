#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

long get_long(void);//验证输入是一个整数
bool bad_limits(long begin,long end,long low,long high);//确定范围上下限是否有效
double square(long a,long b);//计算a~b的平方和

long get_long(void)
{
    long input;
    char ch;
    while ((scanf("%ld",&input)) != 1)
    {
        while ((ch = getchar()) != '\n')
        {
            putchar(ch);//处理错误输入
        }
        printf(" is not an integer.\n");
        printf("please enter an integer such as -124,25,1.\n");       
    }
    return input;
}

bool bad_limits(long begin,long end,long low,long high)
{
    bool good = true;
    if (low>high || begin>end)
    {
        good = false;
    }
    if (begin<low || end<low || end>high || begin>high)
    {
        good = false;
    }
    return good;
}

double square(long a,long b)
{
    int i;
    double sum = 0;
    for ( i = a; i <= b; i++)
    {
        sum +=i*i;
    }
    return sum;
}

int main (void)
{
    const long MIN = -10000000L;//范围上限
    const long MAX = +10000000L;//范围下限
    long start;//用户指定范围最小值
    long stop;//用户指定范围最大值
    double answer;
    printf("This program computes the sum of the squares of integers in a range.\n"
            "The lower bound should not be less than -10000000 and \n"
            "the upper bound should not be more than +10000000.\n"
            "Enter the limits(enter 0 for both limits to quit):\n"
            "lower limit: "
    );
    start = get_long();
    printf("upper limit: ");
    stop = get_long();
    while (start !=0 || stop !=0)
    {
        if(bad_limits(start,stop,MIN,MAX) == false)
        {
            printf("Yout limits is not valid.Please try again.\n");
        }
        else
        {
            answer = square(start,stop);
            printf("The sum of the squares of the integers from %ld to %ld is %g\n",start,stop,answer);//%g:根据值的不同，自动选择%f或%e。%e格式用于指数小于-4或大于等于精度时            
        }
        printf("Enter the limits(enter 0 for both limits to quit):\n");
        printf("lower limits:");
        start = get_long();
        printf("upper limit:");
        stop = get_long();
    }
    printf("Done.\n");
    system("pause");
}
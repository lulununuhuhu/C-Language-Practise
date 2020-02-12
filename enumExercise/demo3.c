#include "stdio.h"
#include "stdlib.h"


int main(void)
{
    enum RGB{blue,yellow,red=10,green};//枚举变量初始化后便不可更改
    printf("blue = %d\n",blue);
    printf("yellow = %d\n",yellow);
    printf("red = %d\n",red);
    printf("green = %d\n",green);
    system("pause");
}
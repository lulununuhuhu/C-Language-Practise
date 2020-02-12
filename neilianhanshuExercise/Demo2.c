#include "stdio.h"
#include "stdlib.h"
#define PRINT(format,...)  printf(# format,##__VA_ARGS__)//...表示可变参数，#后面是字符串，##是将左右两边字符相连

int main(void)
{
    PRINT(num = %d\n,520);//等同于printf（"num = %d",520）
    PRINT(Hello FishC!\n);
    PRINT(List = %s\n,"我会发着呆然后微微笑");
    system("pause");
}
#include "stdio.h"
#include "stdlib.h"

#define SHOWLIST(...)  printf(#__VA_ARGS__)//...表示可变参数，__VA_ARGS__在预处理中被实际的参数集所替换

int main(void)
{
    SHOWLIST(路程+sdfs+520+1314);
    system("pause");
}
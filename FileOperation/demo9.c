/*
标准IO提供的三种类型的缓冲模式：
1：按块缓存（全缓存）：在填满缓冲区后才进行实际的设备读写操作
2：按行缓存：在接收到换行符\n之前，数据都是先缓存在缓冲区中
3：不缓存：允许你直接读写设备上的数据
*/
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

int main(void)
{
    char buff[1024];
    memset(buff,'\0',sizeof(buff));
    setvbuf(stdout,buff,_IOFBF,1024);//setvbuf函数用于指定一个数据流的缓存模式.指定打开stdout为数据流，buff为自行分配的缓冲区，
                                     //指定数据流缓存模式是按块缓存，缓冲区的字节为1024
    fprintf(stdout,"Welcome to bbs.fishc.com\n");
    fflush(stdout);//强制刷新缓存区，使缓存区数据打印出来
    fprintf(stdout,"输入数据后才能显示出来!\n");
    getchar();
    system("pause");
}
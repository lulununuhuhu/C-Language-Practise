#include "stdio.h"
#include "stdlib.h"
#define PRINT(format,...)  printf(# format,##__VA_ARGS__)//...��ʾ�ɱ������#�������ַ�����##�ǽ����������ַ�����

int main(void)
{
    PRINT(num = %d\n,520);//��ͬ��printf��"num = %d",520��
    PRINT(Hello FishC!\n);
    PRINT(List = %s\n,"�һᷢ�Ŵ�Ȼ��΢΢Ц");
    system("pause");
}
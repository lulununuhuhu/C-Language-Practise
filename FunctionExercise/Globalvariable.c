#include "stdio.h"
#include "stdlib.h"

void a();
void b();
void c();
int count = 0;//����һ��ȫ�ֱ���count.�������ȫ�ֱ������г�ʼ������ô�����Զ���ʼ��Ϊ0
float f;

void a(){
    count++;
}
void b(){
    count++;
}
void c(){
    count++;
}

int main()
{
    a();
    b();
    c();
    a();
    printf("С�����챻����%d��\n",count);
    printf("ȫ�ֱ���Ĭ�ϳ�ʼ��Ϊ%f\n",f);
    printf("����a�ĵ�ַ��%p\n",&a);
    printf("����b�ĵ�ַ��%p\n",&b);
    system("pause");
}
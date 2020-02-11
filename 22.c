#include "stdlib.h"
#include "stdio.h"

main (void)
{
    unsigned int Res[2];
    Res[0]='C';
    printf("%d",Res[0]);
    if(Res[0]==0x43)  printf("True");
    system("pause");
}
#include "stdlib.h"
#include "stdio.h"

main(void){
    int a[3][4] ={1,2,3,4,5,6,7,8,9,10,11,12};
    int (*p)[4] =a;
    int i,j;
    printf("i= ");
    scanf("%d",&i);
    while(i<0||i>2){
        printf("i= ");
        scanf("%d",&i);
    }
    printf("j= ");
    scanf("%d",&j);
    while(j<0||j>3){
        printf("j= ");
        scanf("%d",&j);
    }
    printf("a[%d][%d] = %d",i,j,*(*(p+i)+j));
    system("pause");
}
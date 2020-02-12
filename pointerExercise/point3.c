#include "stdio.h"
#include "stdlib.h"
void sort(int x[],int n);
main (void)
{
    int *p,i,a[10]={10,2,23,33,21,56,25,14,233,12};
    printf("The original array is \n");
    for ( i = 0; i < 10; i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
    p = a;
    sort(p,10);
    printf("The result is \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ",*p);
        p++;
    }
    system("pause");
    
}
void sort(int x[],int n){
    int i,j,k,t;
    for ( i = 0; i < n-1; i++)
    {
        k = i;
        for(j=i+1;j<n;j++){
            if(x[k]<x[j]){
                t= x[j];
                x[j]=x[k];
                x[k]=t;
            }
        }
    }
    
}
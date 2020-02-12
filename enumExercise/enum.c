#include "stdio.h"
#include "stdlib.h"
int main()
{
    enum weekday{
        saturday ,
        sunday ,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday          //对列表某个标识符赋值后，紧接其后的标识符依次加一；如果没有赋值，则从第一个标识符为0开始
    }a,b,c;
    a = saturday;
    b = tuesday;
    c = thursday;
    printf("a = %d\n,b = %d\n,c = %d\n",saturday,monday,c);
    system("pause");
}
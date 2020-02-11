#include "stdlib.h"
#include "stdio.h"

void display(char cr,int lines ,int width);
void display(char cr,int lines,int width)
{
    int row,col;
    for (row = 0; row < lines; row++)
    {
        for (col = 0; col < width; col++)
        {
            putchar(cr);
        }
        putchar('\n');       
    }    
} 

int main(void)
{
    int ch;
    int rows,cols;
    printf("Please enter a character and two integers:\n");
    while ((ch = getchar()) != '\n')
    {
       if(scanf("%d %d",&rows,&cols)!=2)
            break;
        display(ch,rows,cols);
        while (getchar()!='\n')
        {
            continue;
        }       
        printf("Rnter another character and tow integers：\n");
        printf("Enter a newline to quit.\n");
    }
    printf("BYE");
    system("pause");
    return 0;
}
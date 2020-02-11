#include "stdlib.h"
#include "stdio.h"
#include "ctype.h"
int main(void)
{
    char ch;
    printf("Give me a letter of the alphabet,and I will give an animal name\n");
    printf("beginning with that letter.\n");
    printf("Please type in a letter;type # to end my act.\n");
    while((ch=getchar()) !='#')
    {
        if('\n' == ch)
            continue;
        if(islower(ch)) //只接受小写字母
            switch (ch)
            {
            case 'a':
                printf("argali,a wild sheep of Asia\n");
                break;
            case 'b':
                printf("babirusa,a wild pig of Malay\n");
                break;
            case 'c':
                printf("coati,racoonlike mammal\n");
                break;
            case 'd':
                printf("desman.aquatic, molelike critter");
                break;
            case 'e':
                printf("echidma,the spiny anteacher\n");
                break;
            default:
                printf("That is a stumper!\n");
            }
        else
            {
                printf("I recongnize only lowercase letters.\n");
            }
        while (getchar()!='\n')
            {
                continue;
            }
            printf("Please type another letter or a #.\n");          
    }
    printf("Bye!\n");
    system("pause");
    return 0;
}
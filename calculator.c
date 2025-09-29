/*
program to implement simple calculator
input
10+5
output
10+5=15
*/


#include <stdio.h>

int main()
{
    int x,y;
    char sign;
    scanf("%d %c %d", &x, &sign, &y);
    switch(sign)
    {
        case '+':
            printf("%d + %d = %d",x,y, x+y);
            break;
        case '-':
            printf("%d - %d = %d",x,y, x-y);
            break;
        case 'x': case 'X': case '*':
            printf("%d x %d = %d",x,y, x*y);
            break;
        case '/':
            printf("%d / %d = %d",x,y, x/y);
            break;
        case '%':
            printf("%d %% %d = %d",x,y, x%y);
            break;
        default:
            printf("Invalid operation!");
    }
    return 0;
}

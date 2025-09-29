// program to convert a character

#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if (ch >='A' && ch <='Z')
        printf("Toggle case of '%c' is '%c'", ch, ch+32);
    else if (ch >='a' && ch<='z')
        printf("Toggle case of '%c' is '%c'", ch, ch-32);

    else
        printf("'%c' is not an alpabet",ch);

    return 0;
}

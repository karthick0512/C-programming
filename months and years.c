// program to find day of the date
// using Zeller's Rule

#include <stdio.h>

int main()
{
    int dd, mm, yy, f, D, C;
    scanf("%d/%d/%d", &dd, &mm, &yy);
    if (mm == 1 || mm == 2)
    {
       mm+=10;   //mm = mm +10
       yy--;
    }
    else
        mm-=2;
    D = yy % 100;
    C = yy / 100;
    f = (dd + (13*mm-1)/5 + D + D/4 + C/4 - 2*C)%7;
    if (f < 0)
        f = f + 7;
    switch(f)
    {
        case 0: printf ("Sunday"); break;
        case 1: printf ("Monday"); break;
        case 2: printf ("Tuesday"); break;
        case 3: printf ("Wednesday"); break;
        case 4: printf ("Thursday"); break;
        case 5: printf ("Friday"); break;
        case 6: printf ("Saturday");

    }
    return 0;
}

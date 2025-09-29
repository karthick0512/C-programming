// program to demonstrate switch statements
/*
1 --> It's Monday conccertrate in work.
2,3,4 --> still it's week day only.
5 --> Friday Get reade for week end.
6,7 --> Enjoy your week-end.
otherwise -> Invalid day number!
*/

#include <stdio.h>

int main()
{
    int day;
    scanf("%d", &day);
    switch(day)
    {
        case 1:
            printf("It's Monday conccertrate in work./n");
            break;
        case 2 ... 4:
            printf("still it's week day only.");
            break;
        case 20-10:
            printf("Friday Get reade for week end.");
            break;
        case 6: case 7:
            printf("Enjoy your week-end.");
            break;
        default:
            printf("Invalid day number!");
    }
    return 0;
}

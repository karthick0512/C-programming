#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int copy = num, rev = 0;
    while(num!=0)
    {
        int reminder = num % 10;
        num = num/ 10;
        rev = rev * 10 + reminder;
    }
    if(rev == copy)
        printf("Yes");
    else
        printf("No");

    return 0;
}

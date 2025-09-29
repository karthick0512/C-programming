// program to print natural numbers upto N

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i<=n; i++)
    {
        printf("%d", i);

    }
    printf("\n\n\n");

    for (int i = n; i>=1; i--)
    {
        printf("%d", i);
        printf("\n");

    }

    return 0;
}

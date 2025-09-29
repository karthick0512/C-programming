// program to print odd numbers in reverse order


#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n%2?n:n-1; i>=1; i-=2)
        printf("%d\n",i);
        printf("\n");
    return 0;
}

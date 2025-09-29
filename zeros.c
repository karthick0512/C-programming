#include <stdio.h>


int main()
{
    int f,n;
    scanf("%d", &n);
    for(int i=n; i>=1; i--)
    {
        f = f*i;
        printf("%d",f);

    }
    return 0;
}

//program to print three in increasing order

#include <stdio.h>

int main()
{
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    if ( x < y && x < z)
    {
        if (y < z)
            printf("%d < %d < %d", x, y, z);
        else
            printf("%d < %d < %d", x, z, y);
    }
    else if (y<z)
    {
        if (x<z)
            printf("%d < %d < %d", y, x, z);
        else
            printf("%d < %d < %d", y, z, x);
    }
    else if (x<y)
    {
        printf("%d < %d < %d", z, x, y);
    }
    else
        printf("%d < %d < %d", z, y, x);
    return 0;
}

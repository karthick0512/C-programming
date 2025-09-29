
//program to print three in increasing order
//method - 2

#include <stdio.h>

int main()
{
    int x, y, z, max, min, mid;
    scanf("%d %d %d", &x, &y, &z);
    max = x>y&&x>z?x:(y>z?y:z);
    min = x<y&&x<z?x:(y<z?y:z);
    mid = x+y+z - (max+min);
    printf("%d < %d < %d", min, mid, max);

    return 0;
}

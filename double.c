#include <stdio.h>


int main ()
{
    double x, y, sum;
    scanf("%lf %lf", &x, &y);
    sum = x + y;
    if(sum == (long)sum)
        printf("%ld", (long)sum);
    else
        printf("%.lf", sum);

    return 0;
}

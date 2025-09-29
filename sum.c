#include <stdio.h>

int main()
{
    int num, copy, size=0, sum=0;
    scanf("%d", &num);
    copy = num;

    //counting number of digits

    while(size++,num/=10);
    num = copy;
    while(num!=0)
    {
        int digit = num % 10;
        sum = sum * pow(digit, size);
        num/=10;

    }
     printf("%s", sum == copy?"Yes":"No");

    return 0;
}

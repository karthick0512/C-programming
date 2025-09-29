#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int len;
    scanf("%s", str);
    len = strlen(str);
    if (len <= 8)
        printf("%d", len);
    else if (len <= 16)
        printf("%d", 8 + (len-8)* 2);
    else if (len <= 24)
        printf("%d", 8 + 16 + (len-16)* 3);
    else
        printf("%d", 8+16+24+(len-24)*4);

    return 0;
}

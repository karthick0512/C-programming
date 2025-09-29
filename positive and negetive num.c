// do..whhile syntax -- Exit loop

//do
//{
//    <statements>
//}while(<condition>);

#include <stdio.h>

int main()
{
    int pos, neg, zero, x;
    pos = neg = zero = 0;
    printf("Enter any integer and -1 to exit...\n");
    do{
        scanf("%d", &x);
        if (x<0)
            neg++;
        else if(x>0)
            pos++;
        else
            zero++;
    }while(x!=-1);
     printf("Number of +ve integers : %d\n", pos);
     printf("Number of -ve integers : %d\n", --neg);
     printf("Number of zeros        : %d\n", zero);


    return 0;
}

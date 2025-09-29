//program to check wheather the given date is valid

#include <stdio.h>

int main()
{
    int dd, mm, yy, valid = 1;
    scanf("%d/%d/%d", &dd, &mm, &yy);
    if (dd>31 || dd < 1 || mm > 12 || mm <1 || yy < 1)
        valid = 0;
    else
    {
        switch(mm)
        {
            //April June September November
            case 4: case 6: case 9: case 11:
                if (dd > 30)valid = 0;
                break;
            case 2: // Feb
                if (yy % 400 ==0 || (yy % 4 == 0 && yy % 100!= 0))
                {
                    if (dd > 29) valid == 0;
                }
                else if (dd > 28) valid = 0;
        }
    }
    if (valid)
        printf("Valid");
    else
        printf("Invalid");

    return 0;

}











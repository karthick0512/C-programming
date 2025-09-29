#include <stdio.h>

int main()


{
    int n, x=0, y=0, step=10;
    char dir ='R';
    scanf("%d", &n);
    for (int i = 1; i<=n; i++)
    {
        switch(dir)
        {
            case 'R':
                x+=step;
                dir='U';
                break;
            case 'U':
                y=y+step;
                dir='L';
                break;
            case 'L':
                x=x-step;
                dir='D';
                break;
            case 'D':
                y=y-step;
                dir='r';
                break;
            case 'r':
                x=x+step;
                dir='R';
        }
        step+=10;
    }
    printf("%d, %d", x, y);
    return 0;
}

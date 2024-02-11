#include <stdio.h>

void funcStatic()
{
    int x = 20;
    static int y = 40;
    x = x + 10;
    y = y + 10;
    printf("x = %d, y = %d\n", x, y);
}

int main()
{
    printf("1st Call: ");
    funcStatic();
    printf("2nd Call: ");
    funcStatic();
    printf("3rd Call: ");
    funcStatic();
    return 0;
}
#include <stdio.h>

int main()
{
    for (int i = 1; i<= 10; i++)
    {
        if (i == 2)
        {
            continue;
        }
        if (i == 6 )
        {
            break;
        }
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
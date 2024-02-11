#include <stdio.h>

int main()
{
    const int val = 10;
    int* ptr = &val;
    *ptr = 11;
    printf("%d\n", val);
    return 0;
}
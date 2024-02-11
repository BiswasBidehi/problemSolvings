#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "14570";
    int num = 0;
    int tmp = 0;
    for(int i = 0; i < strlen(str)-1; i++){
        tmp = str[i] - 48;
        num += tmp;
        num *= 10;
    }
    printf("%d\n",num);
}

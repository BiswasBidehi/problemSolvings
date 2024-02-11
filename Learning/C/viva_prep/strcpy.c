#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char text1[MAX_SIZE];
    char text2[MAX_SIZE];
    int i = -1;
    fgets(text1, sizeof(text1), stdin);
    while(text2[i] = text1[++i]);
    printf("%d\n",i-1);
    return 0;
}

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    char text[MAX_SIZE];
    int i;
    int count = 0;
    
    fgets(text, sizeof(text), stdin);

    for(i = 0; text[i] != '\0'; i++)
        count++;
    printf("%d\n",count - 1);

    return 0;
}

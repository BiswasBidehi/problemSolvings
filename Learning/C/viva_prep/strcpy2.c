#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main()
{
    char text1[MAX_SIZE];
    char text2[MAX_SIZE];
    
    fgets(text1, sizeof(text1), stdin);
    
    strcpy(text2, text1);
    printf("%s\n",text1);
    printf("%s\n",text2);
    return 0;
}

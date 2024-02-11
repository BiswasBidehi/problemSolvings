#include <stdio.h>

void char_print(char *str, int start, int end);

int main()
{
    char text[55] = "Hello world This is text";
    int len = 0,i,j = 1;

    while(text[len] != '\0') len++;
    int start = 0, end = 0;
    int arr[len];
    arr[0] = -1;
    i = 1;
    while(text[i] != '\0'){
        if(text[i] == ' ' || text[i] == '\n') {
            arr[j] = i+1;
            j++;
        }
        i++;
    }
    arr[j] = i;

    for(i = j+1; i >0; i--){
        start = arr[i - 1];
        end = arr[i];
        char_print(text, start, end);
    }
}

void char_print(char *str, int start, int end)
{
    for(int i = start; i < end; i++)
        printf("%c", str[i]);
    printf(" ");
}

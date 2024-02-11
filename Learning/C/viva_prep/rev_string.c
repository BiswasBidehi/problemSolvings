#include <stdio.h>

int main(){
    char text[22] = "Atnau Kumar";
    int i = 0, strIndex, len = 0;

    while(text[i] != '\0') i++;
    len = i;

    for(i = len; i >= 0; i--){
        printf("%c",text[i]);
    }

    printf("\n");
}

#include <stdio.h>

int main(){
    char text[22] = "Atanu Kumar  Biswas";
    int word = 0,i = 0;

    while(text[i] != '\0'){
        if(text[i]==' ' || text[i] == '\n' || text[i] == '\t')
            word++;
        i++;
    }
    printf("%d\n", word);

    return 0;
}


#include <stdio.h>

int main(){
    char text[22] = "mbdpam";
    int len = 0;
    while(text[len] != '\n') len++;
    int stIndex = 0, endIndex = len -1;

    while(stIndex <= endIndex){
        if(text[stIndex] != text[endIndex])
            break;
        stIndex++;
        endIndex--;
    }
    printf("%d %d\n",stIndex,endIndex);
    if(stIndex >= endIndex)
        printf("%s is pal\n",text);
    else
        printf("%s is not pal\n",text);
}

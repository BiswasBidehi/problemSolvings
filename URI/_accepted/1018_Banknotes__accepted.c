#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n",a);
    int notes[7] = {100,50,20,10,5,2,1};
    for(int i = 0; i<7; i++){
        printf("%d nota(s) de R$ %d,00\n",a/notes[i],notes[i]);
        a %= notes[i];
    }
    return 0;
}

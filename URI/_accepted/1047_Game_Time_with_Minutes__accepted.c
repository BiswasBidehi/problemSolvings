#include <stdio.h>

int main()
{
    int a,b,c,d,start,end;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    start = a*60+b;
    end = c*60+d;
    if(start<end){
        int ans = end - start;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",ans/60,ans%60);
    }
    else{
        int ans = 1440-start+end;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",ans/60,ans%60);
    }
    return 0;
}

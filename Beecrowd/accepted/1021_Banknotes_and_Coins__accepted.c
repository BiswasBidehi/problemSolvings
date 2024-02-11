#include <stdio.h>

int main()
{
    double b;
    scanf("%lf",&b);
    int note[12] = {10000,5000,2000,1000,500,200,100,50,25,10,5,1};
    int a = b*100;
    for(int i = 0; i<12; i++){
        if(i == 0)
            printf("NOTAS:\n");
        if(i < 6)
            printf("%d nota(s) de R$ %.2f\n",a/note[i],note[i]/100.00);
        if(i == 6)
            printf("MOEDAS:\n");
        if(i > 5 && i < 12)
            printf("%d moeda(s) de R$ %.2f\n",a/note[i],note[i]/100.00);
        a %= note[i];
    }
    return 0;
}

#include <stdio.h>

int main()
{
    float a,b;
    scanf("%f",&a);
    if(a>=0 && a<=400.00)
        b=.15;
    else if(a<=800.00)
        b=.12;
    else if(a<=1200.00)
        b=.1;
    else if(a<=2000.00)
        b=.07;
    else
        b=.04;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\n",a+a*b,a*b);
    printf("Em percentual: %.0f %%\n",b*100);
    return 0;
}

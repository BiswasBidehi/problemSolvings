#include <stdio.h>
int main()
{
    float a,b,c,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf("%f%f%f",&a,&b,&c);
    TRIANGULO = .5*a*c;
    CIRCULO = 3.14159*c*c;
    TRAPEZIO = c/2*(a+b);
    QUADRADO = b*b;
    RETANGULO = a*b;
    printf("TRIANGULO: %.3f\n",TRIANGULO);
    printf("CIRCULO: %.3f\n",CIRCULO);
    printf("TRAPEZIO: %.3f\n",TRAPEZIO);
    printf("QUADRADO: %.3f\n",QUADRADO);
    printf("RETANGULO: %.3f\n",RETANGULO);
    return 0;
}

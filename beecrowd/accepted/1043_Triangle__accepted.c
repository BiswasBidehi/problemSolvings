#include <stdio.h>

int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b)
    //if(a+b>c && b+c>a && c+a>b) // is also right
        printf("Perimetro = %.1f\n",a+b+c);
    else
        printf("Area = %.1f\n",.5*(a+b)*c);
    return 0;
}

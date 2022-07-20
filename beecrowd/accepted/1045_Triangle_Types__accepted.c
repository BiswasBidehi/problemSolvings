#include <stdio.h>

int main()
{
    double x,y,z,a,b,c;
    scanf("%lf%lf%lf",&x,&y,&z);
    if(x>=y && y>=z){
        a=x;b=y;c=z;
    }
    else if(x>=z && z>=y){
        a=x;b=z;c=y;
    }
    else if(y>=x && x>=z){
        a=y;b=x;c=z;
    }
    else if(y>=z && z>=x){
        a=y;b=z;c=x;
    }
    else if(z>=x && x>=y){
        a=z;b=x;c=y;
    }
    else if(z>=y && y>=x){
        a=z;b=y;c=x;
    }

    //printf("%lf %lf %lf\n",a,b,c);
    if(a>=b+c)
        printf("NAO FORMA TRIANGULO\n");
    else{
        if(a*a==b*b+c*c)
            printf("TRIANGULO RETANGULO\n");
        if(a*a>b*b+c*c)
            printf("TRIANGULO OBTUSANGULO\n");
        if(a*a<b*b+c*c)
            printf("TRIANGULO ACUTANGULO\n");
        if(a==b && b==c)
            printf("TRIANGULO EQUILATERO\n");
        if((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b))
            printf("TRIANGULO ISOSCELES\n");

    }
        return 0;


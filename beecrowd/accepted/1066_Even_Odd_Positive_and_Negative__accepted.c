#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI 3.1416
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,k,n) for (i = k; i <= n; ++i) 
#define REPR(i,k,n) for (i = k; i >= n; --i)

int main()
{
    /* freopen("input","r",stdin); */
    /* freopen("output","w",stdout); */
    int a,i,even=0,odd=0,pos=0,neg=0;
    rep(i,5){
        scanf("%d",&a);
        if(!(a%2)) ++even;
        if(a%2) ++odd;
        if(a>0) ++pos;
        if(a<0) ++neg;
    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);

    return 0;
}

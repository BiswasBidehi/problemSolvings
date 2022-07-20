#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI 3.1416
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,k,n) for (i = k; i <= n; ++i) 
#define REPR(i,k,n) for (i = k; i >= n; --i)
#define SWAP(x,y,T) do { T SWAP; SWAP = x; x = y; y = SWAP; } while (0)

int main()
{
    /* freopen("input","r",stdin); */
    /* freopen("output","w",stdout); */
    int i,j,n;
    float a,b,c,res;
    scanf("%i",&n);
    rep(i,n){
        scanf("%f",&a);
        scanf("%f",&b);
        scanf("%f",&c);
        res = a*2 + b*3 + c*5;
        printf("%.1f\n",res/10.0);
    }

    return 0;
}

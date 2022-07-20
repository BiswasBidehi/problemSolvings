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
    int n,x,in=0,out=0,i;
    scanf("%d",&n);
    rep(i,n){
        scanf("%d",&x);
        if(x>=10 && x<=20)
            ++in;
        else
            ++out;
    }
    printf("%d in\n%d out\n",in,out);

    return 0;
}

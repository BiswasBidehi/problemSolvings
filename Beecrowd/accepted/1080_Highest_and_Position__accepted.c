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
    int a,i,high,pos;
    scanf("%d",&a);
    high = a; pos = 1;
    rep(i,99){
        scanf("%d",&a);
        if(a>high){
            high = a;
            pos = i+2;
        }
    }
    printf("%d\n%d\n",high,pos);

    return 0;
}

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
    int i=1,j=60;
    for(i=1,j=60;j>=0;i+=3,j-=5)
        printf("I=%d J=%d\n",i,j);

    return 0;
}

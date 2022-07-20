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
    int k,i=1,j=7;
    while(i<=9){
        k = j;
        while(k>=(j-2)){
            printf("I=%d J=%d\n",i,k);
            k--;
        }
        i+=2;j+=2;
    }

    return 0;
}

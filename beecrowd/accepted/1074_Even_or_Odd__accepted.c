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
    int i,n,x;
    scanf("%d",&n);
    rep(i,n){
        scanf("%d",&x);
        if(x==0) printf("NULL\n");
        else{
            if(x%2) printf("ODD ");
            else printf("EVEN ");
            if(x>0) printf("POSITIVE\n");
            else printf("NEGATIVE\n");
        }
    }

    return 0;
}

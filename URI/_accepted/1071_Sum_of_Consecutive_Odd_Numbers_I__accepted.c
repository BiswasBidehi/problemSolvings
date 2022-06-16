#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI 3.1416
#define rep(i,n) for (int i = 0; i < n; ++i) 
#define REP(i,k,n) for (int i = k; i <= n; ++i) 
#define REPR(i,k,n) for (int i = k; i >= n; --i)
#define SWAP(x, y, T) do { T SWAP = x; x = y; y = SWAP; } while (0)

int main()
{
    /* freopen("input","r",stdin); */
    /* freopen("output","w",stdout); */
    int x,y,i,sum=0;
    scanf("%d%d",&x,&y);
    if (x>y)
        SWAP(x,y,int);
    for(i=y-1; i>x; --i){
        if(i%2)
            sum += i;
    }
    printf("%d\n",sum);
    
    return 0;
}

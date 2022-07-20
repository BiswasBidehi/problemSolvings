#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI 3.1416
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,k,n) for (i = k; i <= n; ++i) 
#define REPR(i,k,n) for (i = k; i >= n; --i)

int main()
{
    /* freopen("input.txt","r",stdin); */
    /* freopen("output.txt","w",stdout); */
    int a,i,count=0;
    rep(i,5){
        scanf("%d",&a);
        if(!(a%2))
            count++;
    }
    printf("%d valores pares\n",count);

    return 0;
}


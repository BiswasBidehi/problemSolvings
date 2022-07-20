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
    float a,sum=0;
    int i,count=0;
    rep(i,6){
        scanf("%f",&a);
        if(a>0){
            count++;
            sum += a;
        }
    }
    printf("%d valores positivos\n",count);
    printf("%.1f\n",sum/count);
    
    return 0;
}

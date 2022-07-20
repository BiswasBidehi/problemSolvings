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
    int n,a,i,c=0, r=0, s=0, total=0;
    char ch;
    scanf("%d",&a);
    a++;
    while(--a){
        scanf("%d",&n);
        getchar();
        scanf("%c",&ch);
        getchar();
        if(ch=='C') c+=n;
        if(ch=='R') r+=n;
        if(ch=='S') s+=n;
        total += n;
    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n",(float)c/total*100.00);
    printf("Percentual de ratos: %.2f %%\n",(float)r/total*100.00);
    printf("Percentual de sapos: %.2f %%\n",(float)s/total*100.00);

    return 0;
}

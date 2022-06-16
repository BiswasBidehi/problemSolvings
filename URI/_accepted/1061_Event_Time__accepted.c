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
    int d1,d2,h1,h2,m1,m2,s1,s2,d,h,m,s;
    scanf("%*s");
    scanf("%d",&d1);
     
    scanf("%d",&h1);
    scanf("%*s");
    scanf("%d",&m1);
    scanf("%*s");
    scanf("%d",&s1);

    scanf("%*s");
    scanf("%d",&d2);
     
    scanf("%d",&h2);
    scanf("%*s");
    scanf("%d",&m2);
    scanf("%*s");
    scanf("%d",&s2);
    int sec1 = d1*24*3600 + h1*3600 + m1*60 + s1;
    int sec2 = d2*24*3600 + h2*3600 + m2*60 + s2;
    int time = sec2-sec1;
    
    d = time / (24*3600);
    time %= (24*3600);
    h = time / 3600;
    time %= 3600;
    m = time / 60;
    s = time % 60;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,h,m,s);

    return 0;
}

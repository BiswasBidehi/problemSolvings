#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416
#define rep(i, n) for (i = 0; i < n; ++i)
#define REP(i, k, n) for (i = k; i <= n; ++i)
#define REPR(i, k, n) for (i = k; i >= n; --i)


int main ()
{
   // freopen("/tmp/_inputs_","r",stdin);
   // freopen("/tmp/_outputs_","w",stdout);

   int x,y;
   scanf("%d%d",&x,&y);
   if(x>y){
       int tmp = x;
       x = y;
       y = tmp;
   }
   for(int i = x+1; i<y;i++){
       if(i%5==2 || i%5==3)
            printf("%d\n",i);
   }

   return 0;
}
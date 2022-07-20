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

   int n;
   long fact = 1;
   scanf("%d",&n);
   for(int i=n;i>0;i--){
       fact *= i;
   }
   printf("%ld\n",fact);

   return 0;
}
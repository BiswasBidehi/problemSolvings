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

   int age,sum=0,people=0;
   while(1)
   {
       scanf("%d",&age);
       if(age<0)
       break;
       sum+=age;
       people++;
   }
   printf("%.2lf\n",(float)sum/people);

   return 0;
}
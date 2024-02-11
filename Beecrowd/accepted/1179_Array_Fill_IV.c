#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416
#define loop(i, n) for (int i = 0; i < n; ++i)      // 0 <= num < n
#define Loop(i, k, n) for (int i = k; i < n; ++i)   // k <= num < n
#define LOOP(i, k, n) for (int i = k; i <= n; ++i)  // k <= num <= n
#define rloop(i, n) for (int i = n; i >= 0; --i)    // n >= num >= 0
#define rLoop(i, k, n) for (int i = k; i > n; --i)  // k >= num > n
#define rLOOP(i, k, n) for (int i = k; i >= n; --i) // k >= num >= n

int main()
{
    freopen("/tmp/_inputs_", "r", stdin);
    // freopen("/tmp/_outputs_","w",stdout);
    int even[5], odd[5], ev = 0, od = 0;
    loop(k, 15)
    {
        int n;
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            even[ev] = n;
            ev++;
            if (ev == 5)
            {
                loop(j, 5)
                {
                    printf("par[%d] = %d\n", j, even[j]);
                }
                ev = 0;
            }
        }
        else
        {
            odd[od] = n;
            od++;
            if (od == 5)
            {
                loop(j, 5)
                {
                    printf("impar[%d] = %d\n", j, odd[j]);
                }
                od = 0;
            }
        }
        if(k==14){

        loop(i,od)
            printf("impar[%d] = %d\n",i,odd[i]);
        loop(i,ev)
            printf("par[%d] = %d\n",i,even[i]);
        }
    }

    return 0;
}
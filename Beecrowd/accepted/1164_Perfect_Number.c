#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416
#define rep(i, n) for (i = 0; i < n; ++i)
#define REP(i, k, n) for (i = k; i <= n; ++i)
#define REPR(i, k, n) for (i = k; i >= n; --i)

int main()
{
    // freopen("/tmp/_inputs_", "r", stdin);
    // freopen("/tmp/_outputs_","w",stdout);

    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a, sum = 0;
        scanf("%d", &a);
        for (int i = 1; i < a; i++)
        {
            if (a % i == 0)
                sum += i;
        }
    if(sum == a)
            printf("%d eh perfeito\n",a);
        else
            printf("%d nao eh perfeito\n",a);
    }
    return 0;
}
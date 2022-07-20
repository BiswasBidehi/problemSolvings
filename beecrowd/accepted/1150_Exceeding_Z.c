#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416
#define rep(i, n) for (i = 0; i < n; ++i)
#define REP(i, k, n) for (i = k; i <= n; ++i)
#define REPR(i, k, n) for (i = k; i >= n; --i)

int main()
{
    // freopen("/tmp/_inputs_","r",stdin);
    // freopen("/tmp/_outputs_","w",stdout);

    int x, z, sum = 0, stp = 0;
    scanf("%d", &x);
    while (1)
    {
        scanf("%d", &z);
        if (z > x)
            break;
    }
    do
    {
        stp++;
        sum += x;
        x++;
    } while (sum <= z);
    printf("%d\n", stp);
    return 0;
}
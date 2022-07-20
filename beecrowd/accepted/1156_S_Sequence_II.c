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

    // 1 + 3/2 + 5/4 + 7/8 + ... + 39/? = ans
    double sum = 0;
    int i, j;
    for (i = 1, j = 1; i <= 39; i += 2, j *= 2)
        sum += (double)i / j;
    printf("%.2lf\n", sum);
    return 0;
}
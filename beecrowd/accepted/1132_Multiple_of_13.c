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

    int x, y;
    long sum = 0;
    scanf("%d%d", &x, &y);
    if (x > y)
    {
        int tmp = x;
        x = y;
        y = tmp;
    }
    for (int i = x; i <= y; i++)
    {
        if (i % 13 != 0)
            sum += i;
    }
    printf("%ld\n", sum);

    return 0;
}
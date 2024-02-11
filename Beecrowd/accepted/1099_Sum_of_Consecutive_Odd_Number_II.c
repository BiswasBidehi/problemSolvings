#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416
#define rep(i, n) for (i = 0; i < n; ++i)
#define REP(i, k, n) for (i = k; i <= n; ++i)
#define REPR(i, k, n) for (i = k; i >= n; --i)
#define SWAP(x, y, T) \
    do                \
    {                 \
        T SWAP;       \
        SWAP = x;     \
        x = y;        \
        y = SWAP;     \
    } while (0)

int main()
{
    // freopen("/tmp/_inputs_", "r", stdin);
    // freopen("/tmp/_outputs_", "w", stdout);

    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        long x, y,tmp;
        long long sum = 0;
        scanf("%ld%ld", &x, &y);

        // start from small number and end to larger
        if (x >= y)
        {
            tmp = x;
            x = y;
            y = tmp;
        }

        // summing odd numbers
        for (long i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }
        printf("%lld\n", sum);
    }

    return 0;
}
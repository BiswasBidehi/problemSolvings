#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

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
    freopen("/tmp/_inputs_", "r", stdin);
    freopen("/tmp/_outputs_", "w", stdout);

    for (double i = 0; i <= 2.1; i += 0.2)
    {
        for (int j = 1; j <= 3; j++)
        {
            if ((i > 1.9 && i < 2.1) || (i > 0.9 && i < 1.1) || (i > -0.1 && i < 0.1))
                printf("I=%.0lf J=%.0lf\n", i, i + j);
            else
                printf("I=%.1lf J=%.1lf\n", i, i + j);
        }
    }

    return 0;
}
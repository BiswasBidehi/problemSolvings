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

    int m, n;
    while (1)
    {
        scanf("%d%d", &m, &n);
        if (m <= 0 || n <= 0)
            return 0;
        if (m > n)
        {
            int tmp = n;
            n = m;
            m = tmp;
        }
        long sum = 0;
        // printf("%d %d", m, n);
        for (int i = m; i <= n; i++)
        {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%ld\n", sum);
    }

    return 0;
}
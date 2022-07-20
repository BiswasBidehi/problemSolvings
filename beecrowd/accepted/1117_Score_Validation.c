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

    int count = 0;
    double num, sum = 0;
    while (1)
    {
        scanf("%lf", &num);
        if (num >= 0 && num <= 10)
        {
            sum += num;
            count++;
            if (count == 2)
            {
                printf("media = %.2lf\n", sum / 2.0);
                return 0;
            }
        }
        else
            printf("nota invalida\n");
    }

    return 0;
}
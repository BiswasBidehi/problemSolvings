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
        int a, tmp = 0;
        scanf("%d", &a);
        for (int i = 2; i <= sqrt(a); i++)
        {
            if (a % i == 0)
            {
                tmp = 1;
                break;
            }
        }
        if (tmp == 0)
            printf("%d eh primo\n", a);
        else
            printf("%d nao eh primo\n", a);
    }
    return 0;
}
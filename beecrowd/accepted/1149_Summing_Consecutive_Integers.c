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

    int a, n, sum = 0;
    scanf("%d", &a);
    while (1)
    {
        scanf("%d", &n);
        if (n > 0)
            break;
    }
    for (int i = a; i < a + n; i++)
        sum += i;
    printf("%d\n",sum);

    return 0;
}
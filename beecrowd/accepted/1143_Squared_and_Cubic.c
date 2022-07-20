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

    int n;
    scanf("%d", &n);
    int a = 1;
    while (n--)
    {
        printf("%d %d %d", a, a * a, a * a * a);
        printf("\n");
        a++;
    }

    return 0;
}
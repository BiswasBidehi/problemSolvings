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

    int v, arr[10];
    scanf("%d", &v);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = v;
        v *= 2;
    }
    for (int i = 0; i < 10; i++)
        printf("N[%d] = %d\n", i, arr[i]);

    return 0;
}
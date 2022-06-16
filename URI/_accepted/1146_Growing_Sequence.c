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

    int a;
    while (1)
    {
        scanf("%d", &a);
        if (a == 0)
            return 0;
        int i;
        for (i = 1; i <= a; i++)
        {
            printf("%d", i);
            if (i == a)
                printf("\n");
            else
                printf(" ");
        }
    }

    return 0;
}
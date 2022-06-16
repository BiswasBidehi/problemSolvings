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

    int n, x, y, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &x, &y);
        if (x % 2 == 0)
            x++;
        sum = 0;
        for (int i = 0; i < y; i++)
        {
            sum += x;
            x += 2;
        }
        printf("%d\n", sum);
    }

    return 0;
}

/*
for the input 4 5, the output must be 45, that is: 5 + 7 + 9 + 11 + 13 = 45
for the input 7 4, the output must be 40, that is: 7 + 9 + 11 + 13 = 40
*/
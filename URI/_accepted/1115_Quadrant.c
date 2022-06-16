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

    int x, y;
    while (1)
    {
        scanf("%d%d", &x, &y);
        if (x == 0 || y == 0)
            return 0;
        if (x > 0 && y > 0)
            printf("primeiro\n");
        else if (x > 0 && y < 0)
            printf("quarto\n");
        else if (x < 0 && y < 0)
            printf("terceiro\n");
        else
            printf("segundo\n");
    }

    return 0;
}

// 2 2 3 - 2 - 8 - 1 - 7 1 0 2

//     primeiro quarto terceiro segundo

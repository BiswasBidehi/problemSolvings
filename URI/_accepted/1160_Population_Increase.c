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
        long pa, pb;
        int count = 0;
        float ga, gb;
        scanf("%ld%ld%f%f", &pa, &pb, &ga, &gb);
        // ga /=100.0;
        // pa /=100.0;
        // doing this calculaton before the next while will give your wrong answer
        while (pa <= pb)
        {
            pa += pa * (ga / 100.0);
            pb += pb * (gb / 100.0);
            count++;
            if (count > 100)
            {

                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (count <= 100)
            printf("%d anos.\n", count);
    }

    return 0;
}

/*
6
100 150 1.0 0           -> 51
90000 120000 5.5 3.5    -> 16
56700 72000 5.2 3.0     -> 12
123 2000 3.0 2.0        -> 100+ print Mais de 1 seculo
100000 110000 1.5 0.5   -> 10
62422 484317 3.1 1.0    -> 100
*/
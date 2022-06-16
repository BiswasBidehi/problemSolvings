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

    int a, b, x;
    int inter = 0, gremio = 0, empates = 0, grenais = 0;
    while (1)
    {
    start:
        scanf("%d%d", &a, &b);
        grenais++;
        printf("Novo grenal (1-sim 2-nao)\n");
        if (a == b)
            empates++;
        else if (a > b)
            inter++;
        else
            gremio++;
        scanf("%d", &x);
        if (x == 1)
            goto start;
        else
        {
            printf("%d grenais\n",grenais);
            printf("Inter:%d\nGremio:%d\nEmpates:%d\n",inter,gremio,empates);
            if (inter > gremio)
                printf("Inter venceu mais\n");
            else if (gremio > inter)
                printf("Gremio venceu mais\n");
            else
                printf("Nao houve vencedor\n");
            return 0;
        }
    }

    return 0;
}
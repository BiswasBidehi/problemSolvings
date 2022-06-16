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

    /*code here*/
    int count = 0;
    int X;
    double num, sum = 0;
    while (1)
    {
    start:
        scanf("%lf", &num);
        if (num >= 0 && num <= 10)
        {
            sum += num;
            count++;
            if (count % 2 == 0)
            {
                printf("media = %.2lf\n", sum / 2.0);
                sum = 0;
                printf("novo calculo (1-sim 2-nao)\n");
                while (1)
                {
                    scanf("%d", &X);
                    if (X == 2)
                        return 0;
                    else if (X == 1)
                        goto start;
                    else
                        printf("novo calculo (1-sim 2-nao)\n");
                }
            }
        }
        else
            printf("nota invalida\n");
    }

    // nota invalida
    //     media = 6.75 novo calculo(1 - sim 2 - nao)

    return 0;
}
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
    int pass;
    while (1)
    {
        scanf("%d", &pass);
        if (pass == 2002)
        {
            printf("Acesso Permitido\n");
            return 0;
        }
        else
            printf("Senha Invalida\n");
    }

    return 0;
}
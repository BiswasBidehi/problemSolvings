#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416
#define loop(n) for (int i = 0; i < n; ++i)
#define rev_loop(n) for (int i = n-1; i >= 0; --i)
#define Loop(i, k, n) for (i = k; i <= n; ++i)
#define LOOP(i, k, n) for (i = k; i >= n; --i)

int main()
{
    // freopen("/tmp/_inputs_","r",stdin);
    // freopen("/tmp/_outputs_","w",stdout);

    int n[20];
    loop(20)
    {
        scanf("%d", &n[i]);
    }
    rev_loop(20)
    {
        printf("N[%d] = %d\n", 19-i, n[i]);
    }

    return 0;
}
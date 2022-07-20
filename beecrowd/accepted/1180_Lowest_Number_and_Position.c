#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416
#define loop(i, n) for (int i = 0; i < n; ++i)      // 0 <= num < n
#define Loop(i, k, n) for (int i = k; i < n; ++i)   // k <= num < n
#define LOOP(i, k, n) for (int i = k; i <= n; ++i)  // k <= num <= n
#define rloop(i, n) for (int i = n; i >= 0; --i)    // n >= num >= 0
#define rLoop(i, k, n) for (int i = k; i > n; --i)  // k >= num > n
#define rLOOP(i, k, n) for (int i = k; i >= n; --i) // k >= num >= n

int main()
{
    // freopen("/tmp/_inputs_", "r", stdin);
    // freopen("/tmp/_outputs_","w",stdout);

    int n, low, low_pos;
    scanf("%d", &n);
    int arr[n];
    loop(i, n)
    {
        scanf("%d", &arr[i]);
        if (i == 0)
        {
            low = arr[i];
            low_pos = 0;
        }
        else
        {
            if (arr[i] < low)
            {
                low = arr[i];
                low_pos = i;
            }
        }
    }
    printf("Menor valor: %d\n",low);
    printf("Posicao: %d\n",low_pos);

    return 0;
}
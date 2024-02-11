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
    // freopen("/tmp/_inputs_","r",stdin);
    // freopen("/tmp/_outputs_","w",stdout);

    double x;
    scanf("%lf", &x);
    double arr[100];
    loop(i, 100)
    {
        arr[i] = x;
        x /= 2;
        printf("N[%d] = %.4lf\n", i, arr[i]);
    }

    return 0;
}
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

long long fibo(int n);
int main()
{
    // freopen("/tmp/_inputs_","r",stdin);
    // freopen("/tmp/_outputs_","w",stdout);
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int a;
        scanf("%d", &a);
        printf("Fib(%d) = %lld\n", a, fibo(a));
    }

    return 0;
}

long long fibo(int n)
{
    long long arr[61] = {0, 1, 0};
    for (int i = 2; i <= 60; i++)
    {
        arr[i] = arr[i - 2] + arr[i - 1];
    }
    return arr[n];
}
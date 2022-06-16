#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416
#define rep(i, n) for (i = 0; i < n; ++i)
#define REP(i, k, n) for (i = k; i <= n; ++i)
#define REPR(i, k, n) for (i = k; i >= n; --i)
#define SWAP(x, y, T) \
    do                \
    {                 \
        T SWAP;       \
        SWAP = x;     \
        x = y;        \
        y = SWAP;     \
    } while (0)

// long long sum(long number);
// long long even_sum(long number);
long long odd_sum(long number);
// long long sum_from_to(long small, long large);
// long long sum_even_from_to(long small, long large);
long long sum_odd_from_to(long small, long large);

int main()
{
    // freopen("/tmp/_inputs_", "r", stdin);
    // freopen("/tmp/_outputs_", "w", stdout);

    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        long x, y, tmp;
        scanf("%ld%ld", &x, &y);

        // start from small number and end to larger

        if (x > y)
        {
            x--;
            tmp = x;
            x = y;
            y = tmp;
        }
        else if (x < y)
            y--;

        printf("%lld\n", sum_odd_from_to(x, y));
    }

    return 0;
}

// long long sum(long number)
// {
//     return (number * (number + 1) / 2);
// }

// long long even_sum(long number)
// {
//     return ((number / 2) * (number / 2 + 1));
// }

long long odd_sum(long number)
{
    if (number % 2 == 0)
        return ((number / 2) * (number / 2));
    else
    {
        number++;
        return ((number / 2) * (number / 2));
    }
}

// long long sum_from_to(long small, long large)
// {
//     return (sum(large) - sum(small));
// }

// long long sum_even_from_to(long small, long large)
// {
//     return (even_sum(large) - even_sum(small));
// }

long long sum_odd_from_to(long small, long large)
{
    return (odd_sum(large) - odd_sum(small));
}

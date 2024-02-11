#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
#define loop(i, n) for (int i = 0; i < n; ++i)      // 0 <= num < n
#define Loop(i, k, n) for (int i = k; i < n; ++i)   // k <= num < n
#define LOOP(i, k, n) for (int i = k; i <= n; ++i)  // k <= num <= n
#define rloop(i, n) for (int i = n; i >= 0; --i)    // n >= num >= 0
#define rLoop(i, k, n) for (int i = k; i > n; --i)  // k >= num > n
#define rLOOP(i, k, n) for (int i = k; i >= n; --i) // k >= num >= n

int main() {
  /* freopen("/tmp/_inputs_", "r", stdin); */
  /* freopen("/tmp/_outputs_", "w", stdout); */

  int t;
  long long n, x;
  scanf("%d", &t);
  while (t--) {
    scanf("%lld", &n);
    x = (-1 + sqrt(1.0 + 8 * n)) / 2;
    if (x >= 0)
      printf("%lld\n", x);
    else {
      x = (-1 - sqrt(1.0 + 8 * n)) / 2;
      printf("%lld\n", x);
    }
  }
  return 0;
}

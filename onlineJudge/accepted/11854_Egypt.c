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

  int b, p, h;
  while (1) {
    scanf("%d%d%d", &b, &p, &h);
    if (b == 0 && p == 0 && h == 0)
      break;
    if (b * b + p * p == h * h || p * p + h * h == b * b ||
        h * h + b * b == p * p)
      printf("right\n");
    else
      printf("wrong\n");
  }
  return 0;
}

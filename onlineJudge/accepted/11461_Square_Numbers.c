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
  freopen("/tmp/_inputs_", "r", stdin);

  freopen("/tmp/_outputs_", "w", stdout);

  int a, b, count, tmp;
  while (1) {
    scanf("%d%d", &a, &b);
    if (a == 0 && b == 0)
      break;
    tmp = sqrt(a * 1.0);
    count = 0;
    while (tmp * tmp <= b) {
      if (tmp * tmp >= a) {
        count++;
      }
      tmp++;
    }
    printf("%d\n", count);
  }
  return 0;
}

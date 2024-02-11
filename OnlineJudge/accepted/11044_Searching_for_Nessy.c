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
  /* freopen("/tmp/_outputs_","w",stdout); */

  int t, h, w, x, y;
  scanf("%d", &t);
  while (t--) {
    scanf("%d%d", &x, &y);
    h = (x - 2) / 3;
    if ((x - 2) % 3 != 0)
      ++h;
    w = (y - 2) / 3;
    if ((y - 2) % 3 != 0)
      ++w;
    printf("%d\n", h * w);
  }
  return 0;
}

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

  int t;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++) {
    int l, w, h;
    scanf("%d%d%d", &l, &w, &h);
    if (l > 20 || w > 20 || h > 20) {
      printf("Case %d: bad\n", i);
    } else {
      printf("Case %d: good\n", i);
    }
  }
  return 0;
}

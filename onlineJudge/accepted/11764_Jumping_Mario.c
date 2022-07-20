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

  int t, n;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++) {
    scanf("%d", &n);
    int x[n], hj = 0, lj = 0;
    for (int j = 0; j < n; j++) {
      scanf("%d", &x[j]);
    }
    for (int j = 1; j < n; j++) {
      if (x[j] > x[j - 1])
        hj++;
      else if (x[j] < x[j - 1])
        lj++;
    }
    printf("Case %d: %d %d\n", i, hj, lj);
    lj = 0;
    hj = 0;
  }
  return 0;
}

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
/* #define PI 3.1416 */
/* #define loop(i, n) for (int i = 0; i < n; ++i)      // 0 <= num < n */
/* #define Loop(i, k, n) for (int i = k; i < n; ++i)   // k <= num < n */
/* #define LOOP(i, k, n) for (int i = k; i <= n; ++i)  // k <= num <= n */
/* #define rloop(i, n) for (int i = n; i >= 0; --i)    // n >= num >= 0 */
/* #define rLoop(i, k, n) for (int i = k; i > n; --i)  // k >= num > n */
/* #define rLOOP(i, k, n) for (int i = k; i >= n; --i) // k >= num >= n */

int main() {
  /* freopen("/tmp/_inputs_", "r", stdin); */
  /* freopen("/tmp/_outputs_","w",stdout); */

  int t, a, b, sum;
  scanf("%d", &t);
  for (int j = 1; j <= t; j++) {
    scanf("%d%d", &a, &b);
    sum = 0;
    for (int i = a; i <= b; i++) {
      if (i % 2 != 0)
        sum += i;
    }
    printf("Case %d: %d\n", j, sum);
  }

  return 0;
}

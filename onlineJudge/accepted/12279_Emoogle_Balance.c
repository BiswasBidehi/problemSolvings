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

  int t, n, z = 0, nz = 0, i = 0;
  while (1) {
    scanf("%d", &t);
    if (t == 0)
      return 0;
    while (t--) {
      scanf("%d", &n);
      if (n == 0)
        z++;
      else
        nz++;
    }
    printf("Case %d: %d\n", ++i, nz - z);
    z = 0;
    nz = 0;
  }
  return 0;
}

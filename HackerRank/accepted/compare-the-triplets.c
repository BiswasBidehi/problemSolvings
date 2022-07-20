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

  int a[3], b[3], alice = 0, bob = 0;
  loop(i, 3) { scanf("%d", &a[i]); }
  loop(i, 3) { scanf("%d", &b[i]); }
  loop(i, 3) {
    if (a[i] > b[i])
      alice++;
    else if (a[i] < b[i])
      bob++;
  }
  printf("%d %d\n", alice, bob);
  return 0;
}

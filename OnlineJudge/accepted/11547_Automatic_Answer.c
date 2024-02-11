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

  long int t, x;
  scanf("%ld", &t);
  while (t--) {
    scanf("%ld", &x);
    x *= 567;
    x /= 9;
    x += 7492;
    x *= 235;
    x /= 47;
    x -= 498;
    if (x < 0)
      x *= -1;
    x %= 100;
    x /= 10;
    printf("%ld\n", x);
  }
  return 0;
}

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

  double p, a, b, c, d, previous, current, decline;
  int n;
  while (scanf("%lf%lf%lf%lf%lf", &p, &a, &b, &c, &d) != EOF) {
    scanf("%d", &n);
    decline = 0.0;
    previous = p * (sin(a + b) + cos(c + d) + 2);
    for (int k = 2; k <= n; k++) {
      current = p * (sin(a * k + b) + cos(c * k + d) + 2);
      if (previous > current) {
        if (decline < (previous - current)) {
          decline = previous - current;
        }
      } else
        previous = current;
    }
    printf("%lf\n", decline);
  }
  return 0;
}

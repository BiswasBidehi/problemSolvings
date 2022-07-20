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

  int n;
  scanf("%d", &n);
  int count = 0, max = 0, num[n];
  loop(i, n) { scanf("%d", &num[i]); }
  max = 0;
  loop(i, n) {
    if (num[i] > max) {
      max = num[i];
      /* printf("%d max\n", max); */
    }
  }
  loop(i, n) {
    if (num[i] == max)
      count++;
  }
  printf("%d\n", count);
  return 0;
}

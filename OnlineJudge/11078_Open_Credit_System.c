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
  /* freopen("/tmp/_outputs_", "w", stdout); */

  int t;
  scanf("%d", &t);
  while (t--) {
    int c;
    scanf("%d", &c);
    int n[c];
    u for (int i = 0; i < c; i++) { scanf("%d", &n[i]); }
    int max = -9999999;
    for (int i = 0; i < c; i++) {
      for (int j = i + 1; j < c; j++) {
        if (max < (n[i] - n[j]))
          max = n[i] - n[j];
      }
    }
    printf("%d\n", max);
  }
  return 0;
}

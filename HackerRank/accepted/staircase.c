#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
#define loop(i, n) for (int i = 1; i <= n; ++i)     // 0 <= num < n
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
  LOOP(i, 1, n) {
    LOOP(j, 1, n) {
      if (j > n - i)
        printf("#");
      else
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}

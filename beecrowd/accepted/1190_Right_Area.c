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

  double arr[12][12], sum = 0;
  char c;
  int count = 0;
  scanf("%c", &c);
  loop(i, 12) {
    loop(j, 12) {
      scanf("%lf", &arr[i][j]);
      if (j > i && j > 11 - i) {
        /* printf("(%d %d) ", i, j); */
        sum += arr[i][j];
        count++;
      }
    }
    /* printf("\n"); */
  }
  if (c == 'S')
    printf("%.1lf\n", sum);
  else if (c == 'M')
    printf("%.1lf\n", sum / count);
  return 0;
}

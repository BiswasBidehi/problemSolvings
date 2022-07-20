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

  int c;
  char s_v;
  float arr[12][12], sum = 0;
  scanf("%d", &c);
  getchar();
  scanf("%c", &s_v);
  loop(i, 12) {
    loop(j, 12) {
      scanf("%f", &arr[i][j]);
      if (j == c)
        sum += arr[i][j];
    }
  }
  if (s_v == 'S')
    printf("%.1f\n", sum);
  else if (s_v == 'M')
    printf("%.1f\n", sum / 12.0);

  return 0;
}

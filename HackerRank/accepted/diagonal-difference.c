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

  int n, l_r_d = 0, r_l_d = 0;
  scanf("%d", &n);
  int num[n][n];
  loop(i, n) {
    loop(j, n) { scanf("%d", &num[i][j]); }
  }
  int i = n - 1, j = 0;
  while (i >= 0 && j < n) {
    r_l_d += num[i][j];
    i--;
    j++;
  }
  i = 0;
  j = 0;
  while (i < n && j < n) {
    l_r_d += num[i][j];
    i++;
    j++;
  }
  printf("%d\n", (l_r_d > r_l_d) ? (l_r_d - r_l_d) : (r_l_d - l_r_d));
  return 0;
}

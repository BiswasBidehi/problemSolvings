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

  int n, poss = 0, neg = 0, zer = 0;
  scanf("%d", &n);
  int arr[n];
  loop(i, n) {
    scanf("%d", &arr[i]);
    if (arr[i] == 0)
      zer++;
    else if (arr[i] > 0)
      poss++;
    else
      neg++;
  }
  printf("%f\n%f\n%f\n", 1.0 * poss / n, 1.0 * neg / n, 1.0 * zer / n);
  return 0;
}

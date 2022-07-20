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
  int n = 5;
  long int a[n];
  loop(i, n) { scanf("%ld", &a[i]); }
  loop(i, n) {
    loop(j, n - 1 - i) {
      if (a[j] > a[j + 1]) {
        long int tmp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = tmp;
      }
    }
  }
  long int sum = 0;
  loop(i, 4) { sum += a[i]; }
  printf("%ld ", sum);
  sum = 0;
  loop(i, 4) { sum += a[i + 1]; }
  printf("%ld\n", sum);

  return 0;
}

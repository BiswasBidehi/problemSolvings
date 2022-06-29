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

  long long int num, digit;
  while (1) {
    scanf("%lld", &num);
    if (num == 0)
      return 0;
    digit = 0;
    do {
      digit += (num % 10);
      num /= 10;
      if (num == 0 && digit > 9) {
        num = digit;
        digit = 0;
      }
    } while (num != 0);
    printf("%lld\n", digit);
  }
  return 0;
}

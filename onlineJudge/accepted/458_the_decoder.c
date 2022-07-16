#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

  char str[400];
  int len;
  while (scanf("%s", str) != EOF) {
    len = strlen(str);
    for (int i = 0; i < len; i++) {
      printf("%c", str[i] - 7);
    }
    printf("\n");
  }
  return 0;
}

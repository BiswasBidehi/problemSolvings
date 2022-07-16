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

  char str[500];
  while (fgets(str, 500, stdin)) {
    int words = 0;
    int alphab = 0;
    for (int i = 0; i < strlen(str); i++) {
      if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        alphab = 1;
      else {
        words += alphab;
        alphab = 0;
      }
    }
    printf("%d\n", words);
  }
  return 0;
}

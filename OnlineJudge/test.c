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
  freopen("/tmp/_inputs_", "r", stdin);
  /* freopen("/tmp/_outputs_","w",stdout); */

  char c[5];
  int s;
  while (1) {
    scanf("%d", &s);
    if (s == 0)
      break;

    getchar();
    fgets(c, 4, stdin);
    printf("%s", c);
  }
  return 0;
}

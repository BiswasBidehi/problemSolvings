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
  /* freopen("/tmp/_outputs_", "w", stdout); */
  int N, max, xs = 0, sum = 0;
  char str[26];
  while (scanf("%d", &N) && getchar() && N) {
    int x[N];
    for (int i = 0; i < N; i++) {
      fgets(str, 26, stdin);
      getchar();
      for (long int j = 0; j < 25; j++) {
        if (str[j] == 'X')
          xs++;
      }
      x[i] = xs;
      xs = 0;
    }
    max = 0;
    for (int i = 0; i < N; i++) {
      if (x[i] > max)
        max = x[i];
    }
    sum = 0;
    for (int i = 0; i < N; i++)
      sum += (max - x[i]);
    printf("%d\n", sum);
  }
  return 0;
}

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
  int t, i = 0;
  scanf("%d", &t);
  for (i = 1; i <= t; i++) {
    int a, b, c, ans;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && b > c)
      ans = b;
    else if (a > c && c > b)
      ans = c;
    else if (b > a && a > c)
      ans = a;
    else if (b > c && c > a)
      ans = c;
    else if (c > a && a > b)
      ans = a;
    else if (c > b && b > a)
      ans = b;
    printf("Case %d: %d\n", i, ans);
  }
  return 0;
}

#include <stdio.h>
#include <string.h>
int main() {
  int t, a, b, sum = 0, i = 1;
  scanf("%d", &t);
  while (i <= t) {
    scanf("%d%d", &a, &b);
    if (a % 2 == 0)
      ++a;
    while (a <= b) {
      sum += a;
      a += 2;
    }
    printf("Case %d: %d\n", i, sum);
    i++;
    sum = 0;
  }
  return 0;
}

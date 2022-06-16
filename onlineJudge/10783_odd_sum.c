#include <stdio.h>

int main() {
  int t, a, b, sum;
  scanf("%d", &t);
  for (int j = 1; j <= t; j++) {
    scanf("%d%d", &a, &b);
    sum = 0;
    for (int i = a; i <= b; i++) {
      if (i % 2 != 0)
        sum += i;
    }
    printf("Case %d: %d\n", j, sum);
  }
  return 0;
}

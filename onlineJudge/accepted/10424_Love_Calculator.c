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

int value_string(char *strr);
int main() {
  /* freopen("/tmp/_inputs_", "r", stdin); */
  /* freopen("/tmp/_outputs_","w",stdout); */

  char str1[100], str2[100];
  while (fgets(str1, 100, stdin) && fgets(str2, 100, stdin)) {
    /* scanf("%[^n]s", str2); */
    /* printf("%s", str1); */
    /* printf("%s", str2); */

    int a = value_string(str1);
    int b = value_string(str2);
    if (a > b) {
      int tmp = a;
      a = b;
      b = tmp;
    }
    printf("%.2f %%\n", 1.0 * a / b * 100);
  }

  return 0;
}

int value_string(char *strr) {
  int sum = 0;
  int ans = 0;
  for (int i = 0; i < strlen(strr); i++) {
    if (strr[i] >= 'a' && strr[i] <= 'z')
      sum += (strr[i] - 'a' + 1);
    else if (strr[i] >= 'A' && strr[i] <= 'Z')
      sum += (strr[i] - 'A' + 1);
  }
  do {
    ans = 0;
    while (sum != 0) {
      ans += (sum % 10);
      sum = sum / 10;
    }
    sum = ans;
  } while (sum / 10 != 0);
  return sum;
}

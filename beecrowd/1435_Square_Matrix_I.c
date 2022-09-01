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

  int size;
  while (1) {
    scanf("%d", &size);
    if (size == 0)
      return 0;
    int num[size][size];
    int s = size;
    int count = size * size;
    int i = 0, j = 0, p = 1;
    while (s - 1) {
      while (j < s && count > 0) {
        num[i][j] = p;
        count--;
        printf("i = %d, j = %d, count = %d\n", i, j, count);
        j++;
      }
      j--;
      i++;
      printf("%d %d loop1\n", i, j);
      while (i < s && count > 0) {
        num[i][j] = p;
        count--;
        printf("i = %d, j = %d, count = %d\n", i, j, count);
        i++;
      }
      i--;
      j--;
      printf("%d %d loop2\n", i, j);
      while (j >= 0 && count > 0) {
        num[i][j] = p;
        count--;
        printf("i = %d, j = %d, count = %d\n", i, j, count);
        j--;
      }
      j++;
      i--;
      printf("%d %d loop3\n", i, j);
      while (i >= 0 && j > i && count > 0) {
        num[i][j] = p;
        count--;
        printf("i = %d, j = %d, count = %d\n", i, j, count);
        i--;
      }
      printf("%d %d loop4\n", i, j);

      p++;
      i++;
      j++;
      s--;
    }

    // print 2d array
    loop(i, size) {
      loop(j, size) { printf("%3d", num[i][j]); }
      printf("\n");
    }
  }
  return 0;
}

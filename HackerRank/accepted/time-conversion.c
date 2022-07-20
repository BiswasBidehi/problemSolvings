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

  char time24[12];
  fgets(time24, 11, stdin);
  /* printf("%s", time24); */
  int hr = 0, min = 0, sec = 0;
  hr = (time24[0] - 48) * 10 + (time24[1] - 48);
  min = ((time24[3] - 48) * 10 + (time24[4] - 48));
  sec = ((time24[6] - 48) * 10 + (time24[7] - 48));
  if (time24[8] == 'P') {
    hr += 12;
    if (hr == 24)
      hr -= 12;
  } else if (time24[8] == 'A') {
    if (hr == 12)
      hr = 0;
  }
  if (hr < 10)
    printf("0%d:", hr);
  else
    printf("%d:", hr);
  if (min < 10)
    printf("0%d:", min);
  else
    printf("%d:", min);

  if (sec < 10)
    printf("0%d\n", sec);
  else
    printf("%d\n", sec);
  return 0;
}

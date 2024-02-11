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

  char word[6][20] = {"HELLO",   "HOLA", "HALLO",
                      "BONJOUR", "CIAO", "ZDRAVSTVUJTE"};
  char lang[6][20] = {"ENGLISH", "SPANISH", "GERMAN",
                      "FRENCH",  "ITALIAN", "RUSSIAN"};

  char str[20];
  int cs = 1;
  while (scanf("%s", str) != EOF) {
    if (!strcmp("#", str))
      break;
    for (int i = 0; i < 6; i++) {
      if (strcmp(str, word[i]) == 0) {
        printf("Case %d: %s\n", cs, lang[i]);
        break;
      }
      if (i == 5) {
        printf("Case %d: UNKNOWN\n", cs);
      }
    }
    cs++;
  }

  return 0;
}

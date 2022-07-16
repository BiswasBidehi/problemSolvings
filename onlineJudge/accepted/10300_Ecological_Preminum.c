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

  int t;
  scanf("%d", &t);
  while (t--) {
    int n, i;
    scanf("%d", &n);
    int size_area, num_animals, env_friendlyness;
    float avg_area_per_animal;
    float paid_per_animal;
    float total_paid;
    float total_money = 0;
    for (i = 0; i < n; i++) {
      scanf("%d%d%d", &size_area, &num_animals, &env_friendlyness);
      avg_area_per_animal = 1.0 * size_area / num_animals;
      paid_per_animal = avg_area_per_animal * env_friendlyness;
      total_paid = num_animals * paid_per_animal;
      total_money += total_paid;
    }
    printf("%d\n", (int)total_money);
    total_money = 0;
  }
  return 0;
}

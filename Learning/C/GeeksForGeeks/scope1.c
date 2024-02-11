#include <stdio.h>

int main() {
  int x = 1, y = 2, z = 3;
  printf("%d %d %d\n", x, y, z);
  {
    int x = 10;
    float y = 20;
    printf("%d %f %d\n", x, y, z);
    {
      int z = 30;
      printf("%d %f %d\n", x, y, z);
    }
  }
  printf("%d %d %d\n", x, y, z);
}

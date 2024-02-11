#include <stdio.h>

#define INCREMENT(x) ++x

int main() {
  char *ptr = "Geeks Quiz";
  int x = 10;
  printf("%s ", INCREMENT(ptr));
  printf("\n");
  printf("%d ", INCREMENT(x));
}

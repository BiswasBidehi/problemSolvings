#include <stdio.h>

int main() {
  static int i = 50;
  if (--i) {
    printf("%d ", i);
    main(10);
  }
  return 0;
}

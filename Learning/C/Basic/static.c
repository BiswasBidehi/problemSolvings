#include <stdio.h>
void func(void);

static int count = 5;

int main() {
  while (count--) {
    func();
  }
  return 0;
}

void func(void) {
  static int i = 5;
  i++;
  printf("i = %d and count = %d\n", i, count);
}

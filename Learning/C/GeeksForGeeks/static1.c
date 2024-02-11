#include <stdio.h>

void function() {
  int x = 20;
  static int y = 30;
  x = x + 10;
  y = y + 10;
  printf("Local: %d\n static: %d\n", x, y);
}

int main() {
  printf("First call: ");
  function();
  printf("Second call: ");
  function();
  printf("Third call: ");
  function();

  return 0;
}

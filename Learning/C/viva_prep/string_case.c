#include <stdio.h>
#include <string.h>

int main() {
  char text[10] = "AtanuKB";
  // make upper
  for (int i = 0; i < strlen(text); i++) {
    if (text[i] >= 'a' && text[i] <= 'z')
      text[i] = text[i] - 32;
  }

  // make lower
  for (int i = 0; i < strlen(text); i++) {
    if (text[i] >= 'A' && text[i] <= 'Z')
      text[i] = text[i] + 32;
  }
  printf("%s\n", text);
}

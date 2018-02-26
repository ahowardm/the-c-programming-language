#include <stdio.h>

int lower(char c);

int main() {
  char c;

  while((c = getchar()) != EOF)
    printf("%c", lower(c));
}

int lower(char c) {
  return (c >= 'A' && c <= 'Z') ? c - 'A' + 'a' : c;
}

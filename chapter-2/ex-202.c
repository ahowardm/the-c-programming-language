#include <stdio.h>
#define MAXLINE 1000

int main() {
  int i = 0, c;
  char s[MAXLINE];
  while (i < MAXLINE - 1){
    if ((c = getchar()) != '\n')
      if (c != EOF)
        s[i] = c;
    ++i;
  }
  return 0;
}

#include <stdio.h>
#define MAX 1000

void escape(char c[], char t[]);

int main() {
  char c[MAX], d[MAX];
  int i = 0;

  while((c[i] = getchar()) != EOF && i < MAX)
    ++i;

  escape(d, c);
  for (i = 0; i < MAX; ++i)
    printf("%c", d[i]);
}

void escape(char s[], char t[]) {
  int i, j;
  for (i = j = 0; t[i] != '\0'; ++i) {
    switch (t[i]) {
      case '\n':
        s[j] = '\\';
        s[j+1] = 'n';
        j+=2;
        break;
      case '\t':
        s[j] = '\\';
        s[j+1] = 't';
        j+=2;
        break;
      default:
        s[j] = t[i];
        ++j;
        break;
    }
  }
}

#include <stdio.h>
#define MAXLINE 1000

int reverse(char line[], char reversed[], int max);
int get_line(char s[], int lim);
void reset_line(char s[], int lim);

int main() {
  int c, length = 0;
  char line[MAXLINE];
  char reversed[MAXLINE];

  while ((length = get_line(line, MAXLINE)) > 0) {
    reset_line(reversed, MAXLINE);
    if (reverse(line, reversed, length-1) == 0)
      printf("%s\n", reversed);
  }
}

int reverse(char s[], char reversed[], int lim) {
  int length = lim;

  for (int i = 0; i < lim; ++i) {
    reversed[i] = s[lim - i - 1];
  }
  return 0;
}

int get_line(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
    if (c == '\n') {
      s[i] = c;
      ++i;
    }
    s[i] = '\0';
    return i;
}

void reset_line(char line[], int length) {
  for (int i = 0; i < length; ++i)
    line[i] = '\0';
}

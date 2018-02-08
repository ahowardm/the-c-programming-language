#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
int remove_tabs(char line[], int length);
int remove_blanks(char line[], int length);
void reset_line(char line[], int length);

int main() {
  int c, length = 0;
  char line[MAXLINE];

  while ((length = get_line(line, MAXLINE)) > 0) {
    remove_blanks(line, MAXLINE);
    remove_tabs(line, MAXLINE);
    printf("%s\n", line);
    reset_line(line, MAXLINE);
  }

}

int get_line(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

int remove_blanks(char s[], int length) {
  for (;length > 0; --length)
    if (s[length] != ' ')
      return 0;
    else if (s[length] == ' ')
      s[length] = '\0';
  return 0;
}

int remove_tabs(char s[], int length) {
  for (; length > 0; --length)
    if (s[length] != '\t')
      return 0;
    else if (s[length] != '\t')
      s[length] = '\0';
  return 0;
}

void reset_line(char line[], int maxline) {
  for (int i = 0; i < maxline; ++i)
    line[i] = '\0';
}

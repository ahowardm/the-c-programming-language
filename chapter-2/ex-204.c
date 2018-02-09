#include <stdio.h>
#define LENGTH 4

void squeeze (char s1[], char s2[]);
int belongs_to(int c, char s[]);

int main () {
  char c[LENGTH], c2[1];
  c[0] = 'a';
  c[1] = 'b';
  c[2] = 'c';
  c[3] = 'd';

  c2[0] = 'b';

  squeeze(c, c2);
  printf("%s\n", c);
  printf("%s\n", c2);
  squeeze(c, c2);
  printf("%s\n", c);


  return 0;
}

/* squeeze: delete all c from s */
void squeeze (char s1[], char s2[]) {
  int i, j;

  for (i = j = 0; s1[i] != '\n'; i++)
    if (belongs_to(s1[i], s2))
      s1[j++] = s1[i];
    s1[j] = '\0';
}

int belongs_to (int c, char s[]) {
  int i = 0;
  while (s[i] != '\0')
    if (s[i++] == c)
      return 1;
  return 0;
}

#include <stdio.h>
#define MAX 10000

void expand(char s1[], char s2[]);
int str_len(char c[]);

int main() {
  char c[] = {'a', '-', 'c', '2', '-', '5'};
  char c2[MAX];

  expand(c, c2);

  int i = 0;
  while(c2[i] != '\0') {
    printf("%c ", c2[i++]);
  }
  printf("\n");

}

void expand(char s1[], char s2[]) {
  int i, j, c;
  j = 0;
  c = 'a';  //  Just to give a start value

  for (i = 0; s1[i] != '-' && i < str_len(s1) - 1; i+=3) {
    int inicio = s1[i];
    c = inicio;
    int fin = s1[i+1] == '-' ? s1[i+2] : s1[i+1];

    while(c <= fin) {
      s2[j] = c++;
      ++j;
    }
  }
  s2[j] = '\0';
}

int str_len(char c[]) {
  int i = 0;
  while(c[i] != '\0')
    ++i;
  return i;
}

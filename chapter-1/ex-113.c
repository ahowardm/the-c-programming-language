#include <stdio.h>

/* Assumption: no word is larger than 20 characters */
#define MAX 20
#define OUT 0
#define IN 1

int main() {


  int c, STATE = 0, nc = 0, maximo = 0;
  int nchar[MAX];

  for (int i = 0; i < MAX; ++i)
    nchar[i] = 0;

  while ((c = getchar()) != EOF){
    if (nc > maximo)
      maximo = nc;
    if (c == ' ' || c == '\t' || c == '\n') {
      STATE = OUT;
      nchar[nc]++;
      nc = 0;
    }
    else{
      STATE = IN;
      ++nc;
    }
  }

  printf("Maximo: %d \n", maximo);
  for (int i = 0; i < MAX; ++i)
    printf("%d: %d \n", i, nchar[i]);

  for (int i = 0; i < MAX; ++i) {
    printf("%d: ", i);
    for (int j = 1; j <= nchar[i]; ++j)
      putchar('-');
    putchar('\n');
    }
}

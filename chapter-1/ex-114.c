#include <stdio.h>

int main(){
  int c;
  int characters['z'-'A'];

  for (int i = 0; i < 'z' - 'A'; ++i)
    characters[i] = 0;

  while ((c = getchar()) != EOF) {
    ++characters[c - 'A'];
  }

  for (int i = 0; i < 'z' - 'A'; ++i)
    printf("%c: %d\n", ('A' + i), characters[i]);

  for (int i = 0; i < 'z' - 'A'; ++i){
    printf("%c: ", ('A' + i));
    for (int  j = 1; j <= characters[i]; ++j)
      putchar('-');
    putchar('\n');
  }
}

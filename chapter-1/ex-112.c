#include <stdio.h>

int main(){
  int c, number_words = 0, STATE = 0;
  while ((c = getchar()) != EOF){
    if (c == ' ' || c == '\n' || c == '\t'){
      STATE = 0; /* Out of a word */
      putchar(c);
      putchar('\n');
      /* Another option:
      printf("%c \n", c); */
    }
    else {
      STATE = 1;
      putchar(c);
    }
  }
}

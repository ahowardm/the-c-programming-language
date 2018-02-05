#include <stdio.h>

int main(){
  int c, number_blanks = 0;

  while((c = getchar()) != EOF){
    if (c == ' ' && number_blanks == 0){
      ++number_blanks;
      putchar(c);
    }
    else if (c == ' ' && number_blanks > 0);
    else{
      number_blanks = 0;
      putchar(c);
    }
  }
}

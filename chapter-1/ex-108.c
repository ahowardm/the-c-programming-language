#include <stdio.h>

int main(){
  int c, number_blanks = 0, number_tabs = 0, number_newlines = 0;

  while ((c = getchar()) != EOF)
    if(c == '\n')
      ++number_newlines;
    else if (c == ' ')
      ++number_blanks;
    else if (c == '\t')
      ++number_tabs;
  printf("Número de líneas: %d \n", number_newlines);
  printf("Número de blancos: %d \n", number_blanks);
  printf("Número de tabs: %d \n", number_tabs);
}

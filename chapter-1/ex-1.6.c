#include <stdio.h>

main(){
  int c, condition;

  condition = (c = getchar()) != EOF;
  switch (condition) {
    case 1:
      printf("El valor es 1\n");
      break;
    case 0:
      printf("El valor es 0\n");
      break;
    default:
      printf("El valor es otro\n");
  }
}

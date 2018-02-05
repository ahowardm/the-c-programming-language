#include <stdio.h>

/* print Fahrenheit-Celsius table */
main(){
  int fahr;
  printf("%s %s\n", "Fahr", "Celsius");
  for(fahr = 300; fahr >= 0; fahr-=20){
    printf("%3.0d %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
  }

}

#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300; floating-point conversion */
float conversion(float fahr);

int main(){
  float fahr;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("%s %s\n", "Fahr", "Celsius");
  while(fahr <= upper){
    printf("%3.0f %6.1f\n", fahr, conversion(fahr));
    fahr += step;
  }
  return 0;
}

float conversion(float fahr) {
  return (5.0/9.0) * (fahr - 32);
}

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LENGTH 4

int htoi(char digits[]);

int main (){
  char test[LENGTH];
  test[0] = '0';
  test[1] = 'X';
  test[2] = 'f';
  test[3] = '1';
  //test[4] = '8';

  printf("The value in decimal is: %d\n", htoi(test));
}

int htoi (char digits[]) {
  int ret = 0, digit = 0;

  for (int i = 0; i < LENGTH; ++i){
    digits[i] = tolower(digits[i]);
    putchar(digits[i]);
  }
  putchar('\n');


  if (digits[0] == '0' && digits[1] == 'x' && digits[2] == '\0')
    return 1;

  for (int i = 2; i < LENGTH; ++i){
    if (isdigit(digits[i])){
      printf("%d\n", digits[i]);
      digit = digits[i] - '0';
    }
    else
      switch (digits[i]) {
        case 'a': digit = 10;
        case 'b': digit = 11;
        case 'c': digit = 12;
        case 'd': digit = 13;
        case 'e': digit = 14;
        case 'f': digit = 15;
      }
    ret = ret * 16 + digit;
  }
  return ret;
}

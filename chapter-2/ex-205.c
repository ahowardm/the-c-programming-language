#include <stdio.h>
#define MAX 1000

int any(char s1[], char s2[]);

int main(){
  char s1[MAX];
  char s2[MAX];

  printf("Insert first String: \n");
  int i = 0;
  while((s1[i] = getchar()) != '\n')
    ++i;
  printf("Insert the second String: \n");
  i = 0;
  while((s2[i] = getchar()) != '\n')
    ++i;

  printf("The first location where a character from String 2 appears in String 1 is %d\n", (1 + any(s1, s2)));

  return 0;
}

int any(char s1[], char s2[]) {
  for (int i = 0; i < MAX; ++i)
    for (int j = 0; j < MAX; ++j)
      if (s1[i] == s2[j])
        return i;
  return -1;
}

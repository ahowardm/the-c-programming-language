#include <stdio.h>
#define SIZEARRAY 10

int binsearch(int x, int v[], int n);
int binsearch_v2(int x, int v[], int n);

int main() {
  int v[SIZEARRAY];
  for (int i = 0; i < SIZEARRAY; ++i) {
    v[i] = i;
    printf("%d ", v[i]);
  }
  printf("\n");

  printf("%d\n", binsearch(4, v, SIZEARRAY));
}


/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n - 1;
  while(low <= high) {
    mid = (low + high)/2;
    if (x < v[mid])
      high = mid - 1;
    else if (x > v[mid])
      low = mid + 1;
    else  /* found match */
      return mid;
  }
  return -1;  /* no match */
}

int binsearch_v2(int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n - 1;
  mid = (low + high)/2;
  while(low < high) {
    mid = (low + high)/2;
    if (x < v[mid])
      high = mid;
    else
      low = mid + 1;
  }
  return (x == v[low]) ? low : -1;
}

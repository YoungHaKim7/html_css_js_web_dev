#include <stdio.h>

int main () {
  int x;
  printf("The address of x of is : %p\n", &x);
  x = 10;
  printf("The address of x of is : %p\n", &x);
  return 0;
}
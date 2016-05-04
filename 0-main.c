#include <stdio.h>
int factorial(int n);

int main(void)
{
  int r;

  /* Run code to test for edge cases. */
  r = factorial(1);
  printf("%d\n", r);
  r = factorial(5);
  printf("%d\n", r);
  r = factorial(10);
  printf("%d\n", r);
  r = factorial(-1024);
  printf("%d\n", r);
  r = factorial(2147483647);
  printf("%d\n", r);
  return (0);
}

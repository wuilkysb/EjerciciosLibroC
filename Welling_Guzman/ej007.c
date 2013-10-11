#include <stdio.h>

int main(void)
{
  int i, n = 1;

  while ( n < 6 ) {
    i = 1;
    while ( i < 6 ) {
      printf("%d \t", n*i);
      i++;
    }
    printf("\n");
    n++;
  }

  return 0;
}
#include <stdio.h>

int main(void)
{
  int i;
  printf("+---------+----------+\n");
  printf("| Decimal | Caracter |\n");
  printf("+---------+----------+\n");
  for(i=32;i<=126;i++) {
    printf("|\t%d|\t%c    |\n", i, i);
  }
  printf("+---------+----------+\n");

  return 0;
}
#include <stdio.h>

int main(void)
{
  int n, m;

  printf("Dame el primer numero:\n");
  scanf("%d", &n);

  printf("Dame el segundo numero:\n");
  scanf("%d", &m);

  if ( n * m == 100 )
    printf("El producto %d * %d es igual a 100\n", n, m);
  else
    printf("El producto %d * %d es distinto de 100\n", n, m);

  return 0;
}
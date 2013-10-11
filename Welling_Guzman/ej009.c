#include <stdio.h>

int main(void)
{
  int a, b;

  scanf("%d", &a);
  scanf("%d", &b);

  while ( a <= b ) {
    scanf("%d", &a);
    scanf("%d", &b);
  }

  printf("%d %d\n", a, b);

  return 0;
}
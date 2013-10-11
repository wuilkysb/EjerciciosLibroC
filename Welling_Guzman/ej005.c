#include <stdio.h>

int main(void)
{
  float a, b, x;

  printf("Valor de a:\n");
  scanf("%f", &a);

  printf("Valord de b:\n");
  scanf("%f", &b);

  if ( a != 0 ) {
    x = -b/a;
    printf("Solucion: %.2f\n", x);
  } else {
    if ( b != 0 ) {
      printf("La ecuacion no tiene solucion.\n");
    } else {
      printf("La ecuacion tiene infinitas soluciones.\n");
    }
  }

  return 0;
}
#include <stdio.h>
#include <math.h>

int main(void)
{
  int opcion = 0;
  float radio = 0.0;

  while ( opcion != 4 ) {
    printf("Escoge una opcion:\n");
    printf("1) Calcular el diametro.\n");
    printf("2) Calcular el perimetro.\n");
    printf("3) Calcular el area.\n");
    printf("4) Salir.\n");

    printf("Teclea 1, 2, 3 o 4 y pulsa el retorno de carro: ");
    scanf("%d", &opcion);

    // El ultimo if deberia estar aca arriba
    // asi no preguntamos por radio si la opcion es invalida
    // De igual manera solo traduce el codigo.

    printf("Dame el radio de un circulo: ");
    scanf("%f", &radio);

    if ( opcion == 1 ) {
      float diametro = 2 * radio;
      printf("El diametro es %.2f\n", diametro);
    } else if ( opcion == 2 ) {
      float perimetro = M_2_PI * radio;
      printf("El perimetro es %.2f\n", perimetro);
    } else if ( opcion == 3 ) {
      float area = M_PI * pow(radio, 2);
      printf("El area es %.2f\n", area);
    } else if (opcion < 1 || opcion > 4) {
      printf("Solo hay cuatro opciones 1, 2, 3 o 4. Tu has tecleado %d\n", opcion);
    }
  }

  return 0;
}
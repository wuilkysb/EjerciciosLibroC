#include <stdio.h>
#include <math.h>

int main(void)
{
	int opcion = 0;
	float radio, diametro, perimetro, area;

	while(opcion != 4) {
		printf("\n");
		printf("Escoge una opcion\n");
		printf("1) Calcula el diametro.\n");
		printf("2) Calcula es perimetro.\n");
		printf("3) Calcula el area.\n");
		printf("4) Salir.\n");
		printf("Teclea 1, 2, 3 o 4 y pulsa el retorno de carro: ");
		scanf("%d", &opcion);
		printf("\n");

		printf("Dame el radio de un circulo: ");
		scanf("%f", &radio);

		if(opcion == 1) {
			diametro = 2 * radio;
			printf("El diametro es %f", diametro);
		} else if(opcion == 2) {
			perimetro = 2 * M_PI * radio;
			printf("El perimetro es %f", perimetro);
		} else if(opcion == 3) {
			area = M_PI * sqrt(radio);
			printf("El area es %f", area);
		} else if(opcion < 1 || opcion > 4) {
			printf("Solo hay cuatro opciones: 1, 2, 3 o 4. Tu has tecleado %d", opcion);
		}
	}

	return 0;
}
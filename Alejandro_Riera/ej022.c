#include <stdio.h>
#include <math.h>

int main() {
	float longitud, area, perimetro;
	printf("Ingrese longitud del lado de un cuadrado: \n");
	scanf("%f", &longitud);

	perimetro = longitud * 4;
	printf("El perimetro del cuadrado es igual a: %.2f\n", perimetro);

	area = pow(longitud,2);
	printf("El area del cuadrado es igual a: %.2f\n", area);

return 0;
}
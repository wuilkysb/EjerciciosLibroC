#include "stdio.h"
#include "math.h"

int main () {
	float lado1,lado2,area,perimetro;
	
	printf("Ingrese longitud del lado de un rectangulo: \n");
	scanf("%f",&lado1);
	printf("Ingrese longitud del otro lado de un rectangulo: \n");
	scanf("%f",&lado2);

	perimetro = lado1 * 2 + lado2 * 2;
	printf("El perimetro del rectangulo es igual a : %.2f\n", perimetro);
	area=  lado1*lado2;
	printf("El area del rectangulo es igual a : %.2f\n", area);
return 0;

}
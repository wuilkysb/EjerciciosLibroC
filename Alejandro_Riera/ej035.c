#include <stdio.h>
#include <math.h>

int main() {
	float radio,perimetro,area;

	printf("Ingrese radio de una circunferencia: "); scanf("%f",&radio);

	perimetro = 2 * M_PI * radio;
	area = M_PI * pow(radio,2);

	printf("El perimetro es: %2.f y el area es: %2.f\n" ,perimetro,area);

return 0;
}
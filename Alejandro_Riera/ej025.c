#include "stdio.h"
#include "math.h"

int main(void) {
	float radio,area,perimetro;
	printf("Ingrese radio de una circunferencia: \n");
	scanf("%f",&radio);

	area= 2* M_PI *radio;
	perimetro= M_PI * pow(radio,2);

	printf("El area de la circunferencia es : %.2f y el perimetro es: %.2f\n", area,perimetro);

return 0;
}
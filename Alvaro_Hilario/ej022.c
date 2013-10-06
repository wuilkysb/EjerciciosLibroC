#include <stdio.h>
#include <math.h>

int main(void)
{
	float l;

	printf("Digite la longitud de un lado del cuadrado: ");
	scanf("%f", &l);
	
	printf("\nEl perimetro del cuadrado es: %.2f y el area es: %.2f\n", 4 * l, pow(l, 2));

	return 0;

}
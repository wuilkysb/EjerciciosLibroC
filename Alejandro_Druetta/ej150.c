#include <stdio.h>
#include <math.h>

float volumen(float r)
{
	return (4/3)*M_PI*pow(r, 3);
}

int main(void)
{
	float radio;

	printf("Dame el radio de una circunferencia: ");
	scanf("%f", &radio);
	printf("El volumen es: %.2f.\n", volumen(radio));

	return 0;
}
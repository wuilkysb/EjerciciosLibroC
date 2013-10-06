#include <stdio.h>
#include <math.h>

int main(void)
{
	float r;

	printf("Digite el radio de la circunferencia: ");
	scanf("%f", &r);

	printf("\nEl perimetro de la circunferencia es: %.2f y el area es: %.2f\n", 2 * M_PI * r, M_PI * pow(r, 2));

	return 0;

}
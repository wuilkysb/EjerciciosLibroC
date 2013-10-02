#include <stdio.h>
#include <math.h>

int main(void)
{
	float radio, peri, area;

	printf("Dame el radio de una circunferencia: ");
	scanf("%f", &radio);
	peri = 2 * M_PI * radio;
	area = M_PI * pow(radio, 2);
	printf("El perímetro es %.2f y el área es %.2f\n", peri, area);

	return 0;
}

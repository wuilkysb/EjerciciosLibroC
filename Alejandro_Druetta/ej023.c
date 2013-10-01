#include <stdio.h>

int main(void)
{
	float lado1, lado2, peri, area;

	printf("Dame el lado mayor de un rectángulo: ");
	scanf("%f", &lado1);
	printf("Dame el lado menor de un rectángulo: ");
	scanf("%f", &lado2);

	peri = lado1 * 2 + lado2 * 2;
	area = lado1 * lado2;

	printf("El perímetro es %.2f y el área es %.2f\n", peri, area);

	return 0;
}

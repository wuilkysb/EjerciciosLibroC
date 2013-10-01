#include <stdio.h>
#include <math.h>

int main(void)
{
	float lado, per, area;

	printf("Dame el lado de un cuadrado: ");
	scanf("%f", &lado);

	per = lado * 4;
	area = pow(lado, 2);

	printf("El perímetro es %.2f y el área es %.2f\n", per, area);

	return 0;
}

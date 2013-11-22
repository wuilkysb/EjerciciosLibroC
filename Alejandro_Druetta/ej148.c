#include <stdio.h>

float cuadrado(float x)
{
	return x * x;
}

int main(void)
{
	float num;

	printf("Dame un flotante: "); scanf("%f", &num);
	printf("El cuadrado de %f es %f.\n", num, cuadrado(num));

	return 0;
}
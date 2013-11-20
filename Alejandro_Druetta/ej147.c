#include <stdio.h>

int cuadrado(int x)
{
	return x * x;
}

int main(void)
{
	int num;

	printf("Dame un entero: "); scanf("%d", &num);
	printf("El cuadrado de %d es %d.\n", num, cuadrado(num));

	return 0;
}
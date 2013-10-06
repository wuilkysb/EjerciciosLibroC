#include <stdio.h>

int main(void)
{
	float a, b;

	printf("Digite un lados del rectangulo: ");
	scanf("%f", &a);
	printf("Digite otro lados del rectangulo: ");
	scanf("%f", &b);

	printf("\nEl perimetro del rectangulo es: %.2f y el area es: %.2f\n", 2 * a + 2 * b, a * b);

	return 0;

}
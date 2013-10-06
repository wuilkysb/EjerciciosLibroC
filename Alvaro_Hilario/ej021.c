#include <stdio.h>
#include <math.h>

int main(void)
{
	float x;

	printf("Digite el valor de x: ");
	scanf("%f", &x);
	printf("\nEl resultado es: %.2f\n", pow(x, 4) - pow(x, 2) + 1);

	return 0;

}
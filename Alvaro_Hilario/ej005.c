#include <stdio.h>

int main(void)
{
	float a, b, x;

	printf("Valor de a: ");
	scanf("%f", &a);
	printf("Valor de b: ");
	scanf("%f", &b);

	if(a != 0) {
		x =  -b/a;
		printf("Soucion %f:", x);
	} else {
		if(b != 0) {
			printf("La ecuacion no tiene solucion.");
		} else {
			printf("La eciacion tiene infinitas soluciones.");
		}
	}

	return 0;
}
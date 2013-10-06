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
		printf("Soucion %f:\n", x);
	} else {
		if(b != 0) {
			printf("La ecuacion no tiene solucion.\n");
		} else {
			printf("La eciacion tiene infinitas soluciones.\n");
		}
	}

	return 0;
}
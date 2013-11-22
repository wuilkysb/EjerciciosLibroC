#include <stdio.h>

float cuadrado(float n) {
	return n * n;
}

int main(void) {
	float numero;
	printf("Dame un número: "); scanf("%f", &numero);
	printf("El cuadrado de %.2f es %.2f", numero, cuadrado(numero));
	
	return 0;
}

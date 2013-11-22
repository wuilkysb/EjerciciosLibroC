#include <stdio.h>

int cuadrado(int n) {
	return n * n;
}

int main(void) {
	int numero;
	printf("Dame un número entero: "); scanf("%d", &numero);
	printf("El cuadrado de %d es %d", numero, cuadrado(numero));
	
	return 0;
}

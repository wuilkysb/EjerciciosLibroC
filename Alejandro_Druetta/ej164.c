#include <stdio.h>

int positivo(void)
{
	int numero;

	scanf("%d", &numero);

	while (numero < 0) {
		printf("%d no es un entero positivo.\n", numero);
		printf("Ingrese nuevamente: ");	scanf("%d", &numero);
	}

	return numero;
}

int main(void)
{
	printf("Ingrese un entero positivo: ");	positivo();

	return 0;
}
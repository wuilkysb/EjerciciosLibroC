/* Compilar con gcc ej157.c -o salida -Wall -std=gnu99 */	

#include <stdio.h>
#include <stdlib.h>

double potencia(float x, int n)
{
	double pot;

	if (n == 0)
		return 1;

	if (n < 0)
		x = 1/x;

	pot = x;
	for (int i=1; i<abs(n); i++)
		pot *= x;

	return pot;
}

int main(void)
{
	float x;
	int n;

	printf("Dame un flotante: "); scanf("%f", &x);
	printf("Ahora dame un exponente: "); scanf("%d", &n);
	printf("La potencia %d de %f es %lf.\n", n, x, potencia(x, n));

	return 0;
}

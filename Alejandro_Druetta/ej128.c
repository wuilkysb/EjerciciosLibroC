#include <stdio.h>

#define TALLA_H 5
#define TALLA_V 4

int main(void)
{
	float matriz[TALLA_V][TALLA_H], resultados[TALLA_V];
	float valor, suma;
	int i, j;

	printf ("\n");
	printf ("Ingrese los datos de la matriz: \n");
	printf ("\n");
	/* Ingresar datos matriz y sumar filas */
	for (i=0; i<TALLA_V; i++) {
		suma = 0;
		for (j=0; j<TALLA_H; j++) {
			printf ("[%d, %d]: ", i, j); scanf ("%f", &valor);
			matriz[i][j] = valor;
			suma += valor;
		}
		resultados[i] = suma;
	}
	/* Encabezado impresión resultados */
	printf ("\n   ");
	for (i=0; i<TALLA_H; i++) {
		printf ("%7d", i);
	}
	printf ("        Suma\n");
	/* Imprimir matriz y resultados */
	for (i=0; i<TALLA_V; i++) {
		printf ("%d [", i);
		for (j=0; j<TALLA_H; j++) {
			printf ("%+7.2f", matriz[i][j]);
		}
		printf ("]  --> %+6.2f \n", resultados[i]);
	}
	printf ("\n");

	return 0;
}

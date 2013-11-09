#include <stdio.h>

#define MAXTALLA 10

int main(void)
{
	int matriz[MAXTALLA][MAXTALLA];
	int i, j, k, l, filas, columnas;

	printf ("\nFilas (mín. 3 y máx. 10): "); scanf ("%d", &filas);
	printf ("Columnas (mín. 3 y máx. 10): "); scanf ("%d", &columnas);
	printf ("\n");

	/* Ingresar datos matriz */
	for (i=0; i<filas; i++)
		for (j=0; j<columnas; j++) {
			printf ("[%d, %d]: ", i, j); scanf ("%d", &matriz[i][j]);
		}

	/* Imprimir matriz */
	printf ("\n");
	for (i=0; i<filas; i++) {
		for (j=0; j<columnas; j++)
			printf ("%3d", matriz[i][j]);
		printf ("\n");
	}
	printf ("\n");

	/* Detectar valles */
	for (i=1; i<filas-1; i++)
		for (j=1; j<columnas-1; j++)
			if (matriz[i][j] < matriz[i-1][j-1] &&
				matriz[i][j] < matriz[i-1][j] &&
				matriz[i][j] < matriz[i-1][j+1] &&
				matriz[i][j] < matriz[i][j-1] &&
				matriz[i][j] < matriz[i][j+1] &&
				matriz[i][j] < matriz[i+1][j-1] &&
				matriz[i][j] < matriz[i+1][j] &&
				matriz[i][j] < matriz[i+1][j+1]) {
				/* Imprimir valle */
				printf ("Valle en fila %d columna %d: \n", i+1, j+1);
				for (k=i-1; k<=i+1; k++) {
					for (l=j-1; l<=j+1; l++)
						printf ("%3d", matriz[k][l]);
					printf ("\n");
				}
			}
	printf ("\n");

	return 0;
}

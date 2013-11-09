#include <stdio.h>

#define TALLA_DIAS 3
#define TALLA_HORAS 4

int main(void)
{
	int temperatura[TALLA_DIAS][TALLA_HORAS], maxima_dia[TALLA_DIAS], 
		minima_dia[TALLA_DIAS], media_dia[TALLA_DIAS];
	int i, j; 
	int maxsem, maxsem_i, maxsem_j, max30, minsem, medsem, sum_semana; 
	int maxdia, mindia, sum_dia;

	/* Ingresar las temperaturas por teclado */
	for (i=0; i<TALLA_DIAS; i++)
		for (j=0; j<TALLA_HORAS; j++) {
			printf ("Día %d Hora %.2d:00 = ", i+1, j+1);
			scanf ("%d", &temperatura[i][j]);
		}

	/* Cálculo semanal */
	sum_semana = max30 = 0;
	minsem = maxsem = temperatura[0][0];
	for (i=0; i<TALLA_DIAS; i++)
		for (j=0; j<TALLA_HORAS; j++) {
			if (temperatura[i][j] > maxsem) {
				maxsem = temperatura[i][j];
				maxsem_i = i;
				maxsem_j = j;
			}
			if (temperatura[i][j] < minsem)
				minsem = temperatura[i][j];
			if (temperatura[i][j] > 30)
				max30++;
			sum_semana += temperatura[i][j];
		}
	medsem = sum_semana / (TALLA_DIAS*TALLA_HORAS);

	/* Cálculo diario */
	for (i=0; i<TALLA_DIAS; i++) {
		mindia = maxdia = temperatura[i][0];
		sum_dia = 0;
		for (j=0; j<TALLA_HORAS; j++) {
				if (temperatura[i][j] > maxdia)
					maxdia = temperatura[i][j];
				if (temperatura[i][j] < mindia)
					mindia = temperatura[i][j];
				sum_dia += temperatura[i][j];
		}
			maxima_dia[i] = maxdia;
			minima_dia[i] = mindia;
			media_dia[i] = sum_dia / TALLA_HORAS;
	}

	/* Imprimir resultados */
	printf ("\nMáxima semanal: %dº centígrados.\n", maxsem);
	printf ("Registrada el día %d a las %.2d:00.\n", maxsem_i+1, maxsem_j+1);
	printf ("Mínima semanal: %dº centígrados.\n", minsem);	
	printf ("\n%d días con temperaturas mayores a 30º centígrados.\n", max30);
	printf ("\nTemperatura media semanal: %dº centígrados.\n\n", medsem);
	for (i=0; i<TALLA_DIAS; i++) {
		printf ("Máxima día %d: %2dº centígrados.\n", i+1, maxima_dia[i]);
		printf ("Mínima día %d: %2dº centígrados.\n", i+1, minima_dia[i]);
		printf ("Media  día %d: %2dº centígrados.\n", i+1, media_dia[i]);
		printf ("\n");
	}

	return 0;
}

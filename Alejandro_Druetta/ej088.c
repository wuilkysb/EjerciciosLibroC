#include <stdio.h>

#define TALLA_TEMP 168

int main(void)
{
	int temperatura[TALLA_TEMP], maxima_dia[TALLA_TEMP/24], 
		minima_dia[TALLA_TEMP/24], media_dia[TALLA_TEMP/24];
	int i, j, k; 
	int maxsem, maxsem_i, max30, minsem, medsem, sum_semana; 
	int maxdia, mindia, sum_dia;

	/* Ingresar las temperaturas por teclado */
	k = 0;
	for (i=1; i<=TALLA_TEMP/24; i++) {
		for (j=1; j<=24; j++) {
			printf ("Día %d Hora %.2d:00 = ", i, j);
			scanf ("%d", &temperatura[k++]);
		}
	}

	/* Cálculo semanal */
	sum_semana = max30 = 0;
	minsem = maxsem = temperatura[0];
	for (i=0; i<TALLA_TEMP; i++) {
		if (temperatura[i] > maxsem) {
			maxsem = temperatura[i];
			maxsem_i = i;
		}
		if (temperatura[i] < minsem)
			minsem = temperatura[i];
		if (temperatura[i] > 30)
			max30++;
		sum_semana += temperatura[i];
	}
	medsem = sum_semana / TALLA_TEMP;

	/* Cálculo diario */
	k = 0;
	for (i=0; i<TALLA_TEMP/24; i++) {
		mindia = maxdia = temperatura[k];
		sum_dia = 0;
		for (j=1; j<=24; j++) {
			if (temperatura[k] > maxdia)
				maxdia = temperatura[k];
			if (temperatura[k] < mindia)
				mindia = temperatura[k];
			sum_dia += temperatura[k];
			k++;	
		}
		maxima_dia[i] = maxdia;
		minima_dia[i] = mindia;
		media_dia[i] = sum_dia / 2;
	}

	/* Imprimir resultados */
	printf ("\nMáxima semanal: %dº centígrados.\n", maxsem);
	printf ("Registrada el día %d a las %.2d:00.\n", (maxsem_i / 24) + 1, 
		(maxsem_i % 24) + 1);
	printf ("Mínima semanal: %dº centígrados.\n", minsem);	
	printf ("\n%d días con temperaturas mayores a 30º centígrados.\n", max30);
	printf ("\nTemperatura media semanal: %dº centígrados.\n\n", medsem);
	for (i=0; i<TALLA_TEMP/24; i++) {
		printf ("Máxima día %d: %2dº centígrados.\n", i+1, maxima_dia[i]);
		printf ("Mínima día %d: %2dº centígrados.\n", i+1, minima_dia[i]);
		printf ("Media  día %d: %2dº centígrados.\n", i+1, media_dia[i]);
	}

	return 0;
}


#include <stdio.h>
#include <math.h>

#define MAX_PERSONAS 100
#define FRANJAS 15

int main(void)
{
	int edad[MAX_PERSONAS], personas, i, j, k, m, aux, suma_edad;
	float suma_desviacion, media, desviacion, mediana;
	int moda, frecuencia, frecuencia_moda, modas[MAX_PERSONAS/2], 
		freqs[MAX_PERSONAS/2];
	int histo[FRANJAS];

	/* Inicializar vectores */
	for (i=0; i<MAX_PERSONAS/2; i++)
		modas[i] = freqs[i] = -1;
	for (i=0; i<FRANJAS; i++)
		histo[i] = 0;

	/* Lectura de edades */
	personas = 0;
	do {
		printf ("Introduce edad de la persona %d (si es negativa, acabar): ", 
			personas+1);
		scanf ("%d", &edad[personas]);
		personas++;
	} while (personas < MAX_PERSONAS && edad[personas-1] >= 0);
	personas--;

	if (personas > 0) {
		/* Cálculo de la media */
		suma_edad = 0;
		for (i=0; i<personas; i++)
			suma_edad += edad[i];
		media = suma_edad / (float) personas;

		/* Cálculo de la desviacion típipica */
		suma_desviacion = 0.0;
		for (i=0; i<personas; i++)
			suma_desviacion += (edad[i] - media) * (edad[i] - media);
		desviacion = sqrt(suma_desviacion / personas);

		/* Cálculo de la moda */
		for (i=0; i<personas-1; i++) // Ordenación mediante burbuja.
			for (j=0; j<personas-i-1; j++)
				if (edad[j] > edad[j+1]) {
					aux = edad[j];
					edad[j] = edad[j+1];
					edad[j+1] = aux;
				}

		j = 0;
		frecuencia = frecuencia_moda = 1;
		moda = -1;
		for (i=0; i<personas-1; i++) {
			if (edad[i] == edad[i+1]) {
				if (++frecuencia > frecuencia_moda)
					frecuencia_moda = frecuencia;
				moda = edad[i];
				modas[j] = moda;
				freqs[j] = frecuencia;
			}
			else {
				if (frecuencia > 1)
					j++;
				frecuencia = 1;
			}
		}

		/* Histograma */
		k = 0;
		m = 10;
		for (i=0; i<personas; i++) {
			if (edad[i] < m)
				histo[k] += 1;
			else {
				k = (edad[i]/10);
				histo[k] += 1;
				m = (edad[i]/10) * 10 + 10;
				}
		}

		/* Cálculo de la mediana */
		if (personas % 2 == 0) {
			mediana = (float) (edad[personas/2] + edad[(personas/2)-1]) / 2;
		}
		else
			mediana = edad[personas/2];

		/* Impresión de resultados */
		printf("Edad media   : %6.2f\n", media);
		printf("Desv. típica : %6.2f\n", desviacion);
		printf("Moda         : | ");
		for (i=0; i<MAX_PERSONAS/2; i++)
			if (freqs[i] == frecuencia_moda)
				printf("%d | ", modas[i]);
		printf("\nMediana      : %6.2f\n", mediana);
		for (i=0; i<FRANJAS; i++) {
			printf("%3d - %3d: ", i*10, i*10+9);
			for (j=0; j<histo[i]; j++)
				printf("*");
			printf("\n");
		}
	}
	else
		printf("No se introdujo dato alguno.\n");

return 0;
}

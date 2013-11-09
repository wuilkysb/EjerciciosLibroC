#include <stdio.h>

#define MAXENF 10
#define MAXSIN 10

int main(void)
{
	char enfermedades[MAXENF][20] = {"gripe", "indigestión", "jaquecas", "paperas", 
		"tuberculosis", "alergia", "sarampión", "rubeola", "dermatitis", 
		"conjuntivitis"};
	char sintomas[MAXSIN][20] = {"fiebre", "tos", "picazón", "dolor de cabeza", 
		"dolor de barriga", "mareos", "rinitis", "sarpullido", "sangrado",
		"manchas"};
	char sintomatologia[MAXENF][MAXSIN] = {{1, 1, 0, 1, 0, 0, 1, 0, 0, 0},
								   		   {0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
								   		   {0, 0, 0, 1, 0, 1, 0, 0, 0, 0},
								   		   {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
								   		   {1, 1, 0, 0, 0, 0, 0, 0, 1, 0},
								   		   {0, 0, 1, 0, 0, 0, 1, 1, 0, 1},
								   		   {0, 0, 1, 0, 0, 0, 0, 1, 0, 0},
								   		   {1, 0, 1, 0, 0, 0, 0, 1, 0, 0},
								   		   {0, 0, 1, 0, 0, 0, 0, 0, 0, 1},
								   		   {0, 0, 1, 0, 0, 0, 0, 0, 0, 0}};
	char paciente[MAXSIN], entrada[2];
	float porcentajes[MAXENF], aux;
	int i, j, cont, positivos;
	int indice_enfer[MAXENF] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	/* Introducir los síntomas */
	printf("\nIntroduzca los síntomas (SÍ=1, NO=0)\n");
	printf("\n");
	for (i=0; i<MAXSIN; i++) {
		printf("%s?: ", sintomas[i]); 
		gets(entrada); sscanf(entrada, "%hhu", &paciente[i]);
	}

	/* Comparar con la matriz y contar coincidencias */
	for (i=0; i<MAXENF; i++) {
		positivos = 0;
		cont = 0;
		for (j=0; j<MAXSIN; j++) {
			if (sintomatologia[i][j] == 1) {
				positivos++;
				if (paciente[j] == sintomatologia[i][j]) cont++;
			}
		}
		porcentajes[i] = (float) cont / ((float) positivos/100);
	}

	/* Ordenar los porcentajes para mostrar los tres mayores */
	for (i=0; i<MAXENF-1; i++)
		for (j=0; j<MAXENF-i-1; j++)
			if (porcentajes[j] < porcentajes[j+1]) {
				/* Ordenar porcentajes */
				aux = porcentajes[j];
				porcentajes[j] = porcentajes[j+1];
				porcentajes[j+1] = aux;
				/* Ordenar índice enfermedades */
				aux = indice_enfer[j];
				indice_enfer[j] = indice_enfer[j+1];
				indice_enfer[j+1] = aux;
			}
	
	/* Imprimir resultados */
	printf("\nDiagnóstico:\n\n");
	for (i=0; i<3; i++)
		printf("%2.0f%c probabilidad de %s.\n", porcentajes[i], '%', enfermedades[indice_enfer[i]]);

	printf("\n");
	
	return 0;
}
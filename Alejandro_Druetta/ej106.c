#include <stdio.h>
#include <string.h>

#define MAXLON 30

int main(void)
{
	/* 
		Detectar si una frase es palíndromo o no. 
		Espacios en blanco y signos de puntuación no se tienen en cuenta.
	*/

	char frase[MAXLON+1], aux[MAXLON+1];
	int i, j=0, longitud, palindromo=1;

	printf("Escriba una frase (no más de %d caracteres): ", MAXLON);
	gets(frase);

	/* Eliminar caracteres no alfabéticos o diferentes a NUL */
	for (i=0; i<MAXLON; i++) {
		if ((frase[i] >= 'Z' && frase[i] <= 'z') || frase[i] == '\0')
			aux[j++] = frase[i];
		else if (frase[i] == (char) 195) {
			aux[j++] = frase[i++];
			aux[j++] = frase[i];
		}
	}

	longitud = strlen(aux);
	strncpy (frase, aux, longitud+1);

	/* Invertir la frase */
	for (i=0; i<longitud; i++) {
		if (frase[i] >= 'Z' && frase[i] <= 'z')
			aux[longitud-(i+1)] = frase[i];
		else if (frase[i] == (char) 195) {
			aux[longitud-(i+1)] = frase[i+1];
			aux[longitud-(i+2)] = frase[i];
			i++;
		}
	}
	aux[longitud] = '\0';

	/* Comparar las dos frases */
	for (i=0; i<longitud; i++)
		if (frase[i] != aux[i]) {
			palindromo = 0;
			break;
		}
	if (palindromo)
		printf("Correcto, la frase es palíndromo!\n");
	else
		printf("Lo lamento, la frase no es palíndromo.\n");

	return 0;
}
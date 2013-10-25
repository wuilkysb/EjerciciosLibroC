#include <stdio.h>
#include <string.h>

#define MAXLON 30

int main(void)
{
	/* Detectar si una palabra es palíndromo o no */

	char palabra[MAXLON+1], inver[MAXLON+1];
	int i, longitud, palindromo=1;

	printf("Escriba una palabra (no más de %d caracteres): ", MAXLON);
	gets(palabra);

	longitud = strlen(palabra);

	/* Invertir la palabra */
	for (i=0; i<longitud; i++) {
		if (palabra[i] != (char) 195)
			inver[longitud-(i+1)] = palabra[i];
		else {
			inver[longitud-(i+1)] = palabra[i+1];
			inver[longitud-(i+2)] = palabra[i];
			i++;
		}
	}
	inver[longitud] = '\0';

	/* Comparar las dos palabras */
	for (i=0; i<longitud; i++)
		if (palabra[i] != inver[i]) {
			palindromo = 0;
			break;
		}
	if (palindromo)
		printf("Correcto, la palabra es palíndromo!\n");
	else
		printf("Lo lamento, la palabra no es palíndromo.\n");

	return 0;
}
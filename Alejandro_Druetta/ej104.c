#include <stdio.h>
#include <string.h>

#define MAXLON 255

int main(void)
{
	/* Invierte una cadena de caracteres */

	char cadena[MAXLON+1], inver[MAXLON+1];
	int i, longitud;

	printf("Escriba algo (no más de %d caracteres): ", MAXLON);
	gets(cadena);

	longitud = strlen(cadena);

	for (i=0; i<longitud; i++) {
		if (cadena[i] != (char) 195)
			inver[longitud-(i+1)] = cadena[i];
		else {
			inver[longitud-(i+1)] = cadena[i+1];
			inver[longitud-(i+2)] = cadena[i];
			i++;
		}
	}

	inver[longitud] = '\0';

	printf("%s\n", inver);

	return 0;
}
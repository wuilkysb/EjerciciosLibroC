#include <stdio.h>
#include <string.h>

#define MAXLON 255

int main(void)
{
	/* Busca un fragmento dentro de una cadena e indica el índice de su primera
	   aparición */

	char cadena1[MAXLON+1], cadena2[MAXLON+1];
	int i, j, longitud1, longitud2, aux=0, coincide=0;

	printf("Ingrese una cadena (no más de %d caracteres): ", MAXLON);
	gets(cadena1);
	longitud1 = strlen(cadena1);
	printf("Ingrese un fragmento de la cadena anterior: ");
	gets(cadena2);
	longitud2 = strlen(cadena2);

	for (i=0; i<longitud1; i++) {
		if (cadena1[i] == cadena2[0]) {
			aux = i;
			for (j=1; j<longitud2; j++) {
				coincide = 1;
				if (cadena2[j] != cadena1[i+j]) {
					coincide = 0;
					break;
				}
			}
		}
		if (coincide) {
			printf("Índice: %d\n", aux);
			break;
		}
	}

	if (!coincide)
		printf("El fragmento no pertenece a la cadena.\n");

	return 0;
}

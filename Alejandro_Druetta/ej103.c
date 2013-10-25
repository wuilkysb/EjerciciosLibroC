#include <stdio.h>
#include <string.h>

#define MAXLON 255

int main(void)
{
	char cadena[MAXLON+1];
	char minusc[MAXLON+1];
	int i;

	printf ("Ingrese una cadena (no más de 255 caracteres): ");
	gets (cadena);

	strcpy (minusc, cadena);

	for (i=0; i<=MAXLON; i++)
		if (minusc[i] >= 'A' && cadena[i] <= 'Z')
			minusc[i] += 32;

	printf ("%s\n", minusc);

	return 0;
}

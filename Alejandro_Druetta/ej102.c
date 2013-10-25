#include <stdio.h>

#define MAXLON 255

int main(void)
{
	char cadena[MAXLON+1];
	char minusc[MAXLON+1];
	int i;

	printf ("Ingrese una cadena (no más de 255 caracteres): ");
	gets (cadena);

	for (i=0; i<=MAXLON; i++)
		if (cadena[i] >= 'A' && cadena[i] <= 'Z')
			minusc[i] = cadena[i] + 32;
		else
			minusc[i] = cadena[i];

	printf ("%s\n", minusc);

	return 0;
}
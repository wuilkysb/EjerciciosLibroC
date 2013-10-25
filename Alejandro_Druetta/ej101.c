#include <stdio.h>

#define MAXLON 255

int main(void)
{
	char cadena[MAXLON+1], encript[MAXLON+1];
	int i;

	printf ("Ingrese una cadena (no más 255 caracteres): ");
	gets (cadena);

	for (i=0; i<MAXLON; i++) {
		if (cadena[i] == '\0')
			encript[i] = cadena[i];
		else if (cadena[i] != 'z' && cadena[i] != 'Z')
			encript[i] = cadena[i] + 1;
		else
			encript[i] = cadena[i] - 25;
	}

	printf ("\nFrase: \"%s\"\n", cadena);
	printf ("Encriptación: \"%s\"\n", encript);

	for (i=0; i<MAXLON; i++) {
		if (encript[i] == '\0')
			cadena[i] = encript[i];
		else if (encript[i] != 'a' && encript[i] != 'A')
			cadena[i] = encript[i] - 1;
		else
			cadena[i] = encript[i] + 25;
	}

	printf ("Desencriptación: \"%s\"\n\n", cadena);

	return 0;
}
#include <stdio.h>
#include <ctype.h>

#define MAXLON 255

int main(void)
{
	char cadena[MAXLON+1], cadfin[MAXLON+1];
	int i, j, k, ya_existe;

	printf ("Escriba algo: "); gets (cadena);

	i = j = 0;
	while (cadena[i] != '\0') {
		if (islower(cadena[i])) {
			ya_existe = 0;
			for (k=0; k<j; k++)
				if (cadena[i] == cadfin[k])
					ya_existe = 1;
			if (!ya_existe)
				cadfin[j++] = cadena[i];
		}
		i++;
	}
	cadfin[j] = '\0';

	printf ("Cadena minúsculas: %s.\n", cadfin);

	return 0;
}
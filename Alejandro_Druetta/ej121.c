#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLON 80

int main(void)
{
	char a[MAXLON+1], b[MAXLON+1];
	int longitud, i, j;

	printf ("Introduce una cadena (máx. %d cars.): ", MAXLON);
	gets(a);

	longitud = strlen(a);
	/* Eliminar espacio inicial */
	if (!isspace(a[0])) {
		b[0] = a[0];
		j = 1;
	}
	/* Eliminar espacios intermedios */
	for (i=1; i<longitud ; i++)
		if (!isspace(a[i]) || (isspace(a[i]) && !isspace(a[i-1])))
			b[j++] = a[i];
	/* Eliminar espacio final */
	if (isspace(b[j-1]))
		b[j-1] = '\0';
	else
		b[j] = '\0';

	printf ("La cadena normalizada es |%s|\n", b);

	return 0;
}

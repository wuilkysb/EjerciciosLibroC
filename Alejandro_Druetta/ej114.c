#include <stdio.h>
#include <string.h>

#define MAXLON 15

int main(void)
{
	char infinitivo[MAXLON+1], conjugado[MAXLON+1];
	int loncad;

	printf("Introduzca un verbo regular de la primera conjugación en "
		"infinitivo: \n"); scanf("%s", infinitivo);

	loncad = strlen(infinitivo);
	strcpy(conjugado, infinitivo);

	printf("\n");

	conjugado[loncad-2] = '\0'; // Extraer desinencia.
	strcat(conjugado, "o");
	printf("Yo %s\n", conjugado);

	conjugado[loncad-2] = '\0';
	strcat(conjugado, "as");
	printf("Tú %s\n", conjugado);

	conjugado[loncad-2] = '\0';
	strcat(conjugado, "a");
	printf("Él %s\n", conjugado);

	conjugado[loncad-2] = '\0';
	strcat(conjugado, "amos");
	printf("Nosotros %s\n", conjugado);

	conjugado[loncad-2] = '\0';
	strcat(conjugado, "áis");
	printf("Vosotros %s\n", conjugado);

	conjugado[loncad-2] = '\0';
	strcat(conjugado, "an");
	printf("Ellos %s\n", conjugado);

	printf("\n");

	return 0;
}
#include <stdio.h>
#include <string.h>

#define MAXLON 255

int main(void)
{
	char cadena1[MAXLON+1], cadena2[MAXLON+1];

	printf("\n");
	printf("Ingrese una cadena: "); gets(cadena1);
	printf("Ingrese otra cadena: "); gets(cadena2);

	if (strcmp(cadena1, cadena2) <= 0)
		printf("Menor o igual.\n");
	printf("\n");

	return 0;
}
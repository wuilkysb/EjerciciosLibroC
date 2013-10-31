#include <stdio.h>
#include <string.h>

#define MAXLON 60

int main(void)
{
	char nombre[MAXLON+1], apellido[MAXLON+1], segapell[MAXLON+1];
	int longnom, longape;

	printf("\n");
	printf("Ingrese el nombre: "); gets(nombre);
	printf("Ingrese el primer apellido: "); gets(apellido);
	printf("Ingrese el segundo apellido: "); gets(segapell);
	printf("\n");

	longnom = strlen(nombre);
	longape = strlen(apellido);

	nombre[longnom] = 32; nombre[longnom+1] = '\0';
	apellido[longape] = 32; apellido[longape+1] = '\0';

	strcat(nombre, apellido);
	strcat(nombre, segapell);

	printf("%s\n", nombre);
	printf("\n");

	return 0;
}
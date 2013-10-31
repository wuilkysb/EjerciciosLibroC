#include <stdio.h>

#define MAXLON 25

int main(void)
{
	char nombre[MAXLON+1], apellido1[MAXLON+1], apellido2[MAXLON+1];
	char nombre_completo[(MAXLON*3)+1];

	printf ("\n");
	printf ("Ingrese el nombre de pila: "); scanf ("%s", nombre);
	printf ("Ingrese el 1º apellido: "); scanf ("%s", apellido1);
	printf ("Ingrese el 2º apellido: "); scanf ("%s", apellido2);
	printf ("\n");
	sprintf (nombre_completo, "%s %s, %s", apellido1, apellido2, nombre);
	printf ("Nombre completo: %s.\n", nombre_completo);
	printf ("\n");

	return 0;
}
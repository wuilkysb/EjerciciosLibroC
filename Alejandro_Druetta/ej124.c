#include <stdio.h>
#include <ctype.h>

#define MAXLONCAD 1000
#define MAXLONALF 26

int main(void)
{
	char cadena[MAXLONCAD+1];
	int alfab[MAXLONALF];
	int i;

	printf ("Escriba algo (máx. %d caracteres): \n", MAXLONCAD); gets (cadena);

	/* Inicializar vector */
	for (i=0; i<MAXLONALF; i++)
		alfab[i] = 0;

	/* Detectar caracter alfabético y contar */
	for (i=0; cadena[i] != '\0'; i++)
		if (isalpha(cadena[i])) {
			if (cadena[i] <= 90)
				alfab[cadena[i]-65]++;
			else
				alfab[cadena[i]-97]++; 
		}

	/* Imprimir resultado */
	for (i=0; i<MAXLONALF; i++)
		if (alfab[i] > 0)
			printf ("%c --> %d\n", i+65, alfab[i]);

	return 0;
}
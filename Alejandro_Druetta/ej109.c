#include <stdio.h>
#include <string.h>

#define MAXLON 255

int main(void)
{
	/* Lee una línea y hace una copia de ella eliminando los espacios
	   en blanco que haya al principio y al final de la misma */

	char linea[MAXLON+1], aux[MAXLON+1];
	int ini, fin, i, j;

	printf ("Escriba algo con espacios antes y después del texto: \n");
	gets (linea);

	/* Encontrar el índice inicial y final de la cadena sin espacios */
	ini = 0;
	while (linea[ini] == ' ')
		ini++;
	fin = strlen(linea) - 1;
	while (linea[fin] == ' ')
		fin--;

	/* Copiar los caracteres válidos */
	j = 0;
	for (i=ini; i<=fin; i++)
		aux[j++] = linea[i];
	aux[j] = '\0';

	printf ("|%s|\n", aux);	

	return 0;
}
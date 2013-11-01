#include <stdio.h>

#define MAXLON 255

int main(void)
{
	/* Lee una línea y muestra por pantalla el número de palabras 
	   que hay en ella */

	char frase[MAXLON+1];
	int i, cont;

	printf("\nIngrese una frase: ");
	gets(frase);

	cont = 1;
	for (i=0; frase[i] != '\0'; i++)
		if (frase[i] == ' ' && frase[i+1] != ' ')
			cont++;

	printf("La frase contiene %d palabras.\n\n", cont);

	return 0;
}
#include <stdio.h>

#define MAXLON 80

int main (void)
{
	char cadena1[MAXLON+1], cadena2[MAXLON+1];
	int i, cont;

	printf ("\n");
	printf ("Ingrese una cadena: "); gets(cadena1);
	printf ("Ingrese otra cadena: "); gets(cadena2);

	i = 0;
	cont = 0;
	while (cadena1[i] != '\0' && cadena2[i] != '\0') {
		if (cadena1[i] == cadena2[i]) {
			cont++;
			i++;
		}
		else if (cadena1[i] > cadena2[i]) {
			printf ("cadena1 > cadena2\n");
			i++;
			break;
		}
		else {
			printf ("cadena1 < cadena2\n");
			i++;
			break;
		}
	}
	if (cont == i)
		printf ("cadena1 == cadena2\n");
	printf ("\n");

	return 0;
}

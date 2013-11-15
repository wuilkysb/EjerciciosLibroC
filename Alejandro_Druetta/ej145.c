#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLON 1000
#define ASCII 48

enum {Suma=1, Resta};

struct Gogol {
	char cifras[MAXLON+1];
	int talla;
} gogol1, gogol2, aux, resultado;

int main(void)
{
	int i, j, opcion, suma, resta, resto, lleva;

	printf("\nIngrese el primer número: "); gets(gogol1.cifras);
	printf("Ingrese el segundo número: "); gets(gogol2.cifras);
	gogol1.talla = strlen(gogol1.cifras);
	gogol2.talla = strlen(gogol2.cifras);

	/* Ordenar de mayor a menor */
	if (gogol1.talla < gogol2.talla) {
		aux = gogol1;
		gogol1 = gogol2;
		gogol2 = aux;
	}

	/* Igualando extensión vectores */
	j = gogol2.talla;
	for (i=gogol1.talla; i>=0; i--) {
		if (i >= gogol1.talla - gogol2.talla)
			aux.cifras[i] = gogol2.cifras[j--];
		else
			aux.cifras[i] = '0';
	}
	gogol2 = aux;
	gogol2.talla = gogol1.talla;
	resultado.talla = gogol1.talla;

	/* Menu */
	printf("\nQué operación desea realizar?:\n\n"
		   "1- Suma\n"
		   "2- Resta\n");
	scanf("%d", &opcion);
	switch (opcion) {
		/* Suma */
		case Suma:
			lleva = 0;
			resultado.cifras[resultado.talla] = '\0';
			for (i=gogol1.talla-1; i>=0; i--) {
				suma = (gogol1.cifras[i] - ASCII) + (gogol2.cifras[i] - ASCII) 
						+ lleva;
				resto = suma % 10;
				if (suma >= 10) {
					resultado.cifras[i] = resto + ASCII;
					lleva = 1;
				}
				else {
					resultado.cifras[i] = suma + ASCII;
					lleva = 0;
				}
			}
			printf("\nSuma: ");
			if (lleva)
				printf("%c", lleva + ASCII);
			printf("%s\n\n", resultado.cifras);
		break;
		/* Resta */
		case Resta:
			lleva = 0;
			resultado.cifras[resultado.talla] = '\0';
			for (i=gogol1.talla-1; i>=0; i--) {
				resta = (gogol1.cifras[i] - lleva) - gogol2.cifras[i];
				if (resta < 0) {
					resultado.cifras[i] = gogol1.cifras[i] + 10 - lleva 
										- gogol2.cifras[i] + ASCII;
					lleva = 1;
				}
				else {
					resultado.cifras[i] = resta + ASCII;
					lleva = 0;
				}			
			}
			printf("\nResta: %s\n\n", resultado.cifras);
		break;
	}

	return 0;
}
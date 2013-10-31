#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAXLON 8

int main(void)
{
	char cadena[MAXLON+1];
	char validos[17] = "0123456789ABCDEF";
	char linea[3];
	int n, i, j, longcad, cont, resultado;

	/* Leer datos por teclado */
	printf("\nIngresa una cadena que represente un número en cualquier base\n");
	printf("comprendida entre 2 y 16 (Letras siempre en mayúsculas): ");
	gets(cadena);
	do {
		printf("Ingresa la base (entre 2 y 16): ");
		gets(linea); sscanf(linea, "%d", &n);
	} while (n < 2 || n > 16);

	/* Comparar con números válidos según la base y calcular */
	longcad = strlen(cadena) - 1;
	resultado = 0;
	cont = 0;
	for (i=0; i<=longcad; i++) {
		if (cadena[i] >= 95 && cadena[i] <= 102)
			cadena[i] -= 32;  // Convertir letras a mayúsculas.
		for (j=0; j<n; j++)
			if (cadena[i] == validos[j]) {
				resultado += j * pow(n, longcad-i); // Calcular el resultado.
				cont++;
				break;
			}
	}

	/* Imprimir resultados */
	if (cont < i)
		printf("\nLa cadena \"%s\" contiene caracteres inválidos para la base %d.\n\n", 
			cadena, n);
	else
		printf("\nLa cadena \"%s\" representa el número en base 10: \"%d\".\n\n", 
			cadena, resultado);

	return 0;
}
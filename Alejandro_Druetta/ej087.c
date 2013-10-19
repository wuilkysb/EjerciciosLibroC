#include <stdio.h>

#define TALLA 10

int main(void)
{
	/* Diseña un programa que pida el valor de 10 números enteros distintos y 
	los almacene en un vector. Si se da el caso, el programa advertirá al 
	usuario, tan pronto sea posible, si introduce un número repetido y 
	solicitará nuevamente el número hasta que sea diferente de todos los 
	anteriores. A continuación, el programa mostrará los 10 números por 
	pantalla. */

	int lista[TALLA];
	int i, j, ya_existe;

	printf ("Introduzca 10 números distintos.\n");
	for (i=0; i<TALLA; i++)
		do {
			ya_existe = 0;
			printf ("Número %d: ", i+1); scanf ("%d", &lista[i]);
			for (j=0; j<i; j++)
				if (lista[i] == lista[j]) {
					printf("El número %d ya fue ingresado!\n", lista[i]);
					ya_existe = 1;
					break;
				}
		} while (ya_existe);

	/* Imprimir lista */
	for (i=0; i<TALLA; i++)
		printf("%d ", lista[i]);
	printf("\n");

	return 0;
}

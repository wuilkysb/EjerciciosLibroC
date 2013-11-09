#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PALOS 4
#define NUMEROS 10
#define CARTAS 40
#define MANO 4
#define JUGADORES 2

int main(void)
{
	char palos[PALOS][8] = {"oros", "espadas", "bastos", "copas"};
	char numeros[NUMEROS][8] = {"as", "2", "3", "4", "5", "6", "7",
						   "sota", "caballo", "rey"};
	char baraja[CARTAS][19], mezcladas[CARTAS][19];
	int azar;
	int i, j, k, existe;

	/* Concatenar y formar la baraja */
	for (i=0; i<PALOS; i++)
		for (j=0; j<NUMEROS; j++)
			sprintf(baraja[k++], "%s de %s", numeros[j], palos[i]);

	/* Mezclar la baraja */
	srand((unsigned) time(NULL));
	for (i=0; i<CARTAS; i++)
		do {
			azar = (int) rand() % 40;
			existe = 0;
			for (j=0; j<i; j++)
				/* Evitar que se repitan las cartas */
				if (!strcmp(baraja[azar], mezcladas[j])) {
					existe = 1;
					break;
				}
			if (!existe || i==0) 
				strcpy(mezcladas[i], baraja[azar]);
		} while (existe);

	/* Repartir las cartas */
	for (i=0; i<JUGADORES; i++) {
		printf("\n");
		printf("Jugador %d: \n", i+1);
		printf("\n");
		for (j=0; j<MANO; j++)
			printf("%s\n", mezcladas[j+(i*MANO)]);
	}
	printf("\n");

	return 0;
}

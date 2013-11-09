#include <stdio.h>
#include <string.h>

#define TALLA 10

int main(void)
{
	/*  {0  , 646, 792 , 933 , 53  , 986 , 985 , 989 , 375 , 834 },
		{646, 0  , 677 , 824 , 698 , 340 , 466 , 907 , 348 , 919 },
		{792, 677, 0   , 157 , 830 , 814 , 1131, 1534, 500 , 291 },
		{933, 824, 157 , 0   , 968 , 927 , 1269, 1690, 656 , 263 },
		{53 , 698, 830 , 968 , 0   , 1038, 1029, 1005, 427 , 1063},
		{986, 340, 814 , 927 , 1038, 0   , 427 , 1063, 659 , 1098},
		{985, 466, 1131, 1269, 1029, 427 , 0   , 676 , 790 , 1384},
		{989, 907, 1534, 1690, 1005, 1063, 676 , 0   , 1053, 1709},
		{375, 348, 500 , 656 , 427 , 659 , 790 , 1053, 0   , 658 },
		{834, 919, 291 , 263 , 857 , 1098, 1384, 1709, 658 , 0   } */

	int distancias[TALLA][TALLA] = {
		{0  , 646, 792 , 0   , 53  , 986 , 985 , 989 , 375 , 834 },
		{646, 0  , 677 , 824 , 698 , 0   , 466 , 907 , 348 , 919 },
		{792, 0  , 0   , 157 , 830 , 814 , 1131, 1534, 500 , 291 },
		{933, 824, 157 , 0   , 0   , 927 , 1269, 1690, 656 , 263 },
		{53 , 698, 830 , 968 , 0   , 1038, 1029, 0   , 427 , 1063},
		{986, 340, 814 , 927 , 1038, 0   , 427 , 0   , 659 , 1098},
		{985, 466, 1131, 1269, 0   , 427 , 0   , 676 , 790 , 1384},
		{989, 907, 0   , 1690, 1005, 1063, 676 , 0   , 1053, 1709},
		{375, 348, 500 , 656 , 427 , 0   , 790 , 1053, 0   , 658 },
		{834, 919, 291 , 263 , 857 , 1098, 1384, 1709, 0   , 0   }};
	int trayecto[TALLA], i, tramo, distancia, dist_total;
	char ciudad[4];

	printf ("\nIngrese las ciudades en orden de llegada. \n");
	printf ("(fin' para salir): \n");
	printf ("\n");
	tramo = 0;
	do {
		printf ("Punto %d: ", tramo+1);
		gets (ciudad); sscanf (ciudad, "%d", &trayecto[tramo]);
		trayecto[tramo]--;
		tramo++;
	} while (strcmp(ciudad, "fin") && tramo<TALLA);
	tramo -= 2;

	printf ("\n");
	dist_total = 0;
	for (i=0; i<tramo; i++) {
		distancia = distancias[trayecto[i]][trayecto[i+1]];
		if (distancia != 0) {
			dist_total += distancia;
			printf ("Tramo %d a %d: %d\n", 
				trayecto[i]+1, trayecto[i+1]+1, distancia);
		} else {
			printf ("El tramo de %d a %d no está conectado...", 
				trayecto[i]+1, trayecto[i+1]+1);
				dist_total = 0;	
				break;
		}
	}

	printf ("\nDistancia total: %d km. \n", dist_total);
	printf ("\n");

	return 0;
}

/* Compilar con: gcc ej144.c -o salida -lm -Wall */

#include <stdio.h>
#include <math.h>

#define MAXPTS 1000

struct Punto {
	float x, y;
} punto;

struct ListaPuntos {
	struct Punto puntos[MAXPTS];
	int talla;
} r;

int main(void)
{
	int i, min;
	float euclides_min, euclides;

	r.talla = 0;
	printf("\nIngresar los puntos en formato x, y ('0, 0' para terinar):\n\n");
	for (i=0; i<MAXPTS; i++) {
		scanf("%f, %f", &r.puntos[i].x, &r.puntos[i].y);
		if (r.puntos[i].x == 0 && r.puntos[i].y == 0) break;
		r.talla++;
	}
	
	euclides_min = 0;
	while (1) {
		printf("\nIngrese un punto en formato x, y ('0, 0' para terinar): \n\n");
		scanf("%f, %f", &punto.x, &punto.y);
		if (punto.x == 0 && punto.y == 0) break;
		else
			for (i=0; i<r.talla; i++) {
				euclides = sqrt(pow(punto.x - r.puntos[i].x, 2) 
							  + pow(punto.y - r.puntos[i].y, 2));
				if (euclides < euclides_min || i == 0) {
					euclides_min = euclides;
					min = i;
				}
			}
		printf("\nPunto más próximo (%.2f, %.2f), distancia: %.2f.\n", 
			r.puntos[min].x, r.puntos[min].y, euclides_min);
	}

	return 0;
}
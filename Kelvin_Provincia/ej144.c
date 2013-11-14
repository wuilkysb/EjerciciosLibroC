/*
 * =============================================================================
 *
 *       Filename:  ej144.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  13/11/13 09:40:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>
#include <math.h>

#define MAXPUNTOS 1000

struct Punto {
    float x, y;
};

struct ListaPuntos {
    struct Punto puntos[MAXPUNTOS];
    int talla;
};

int main(void) {
    struct ListaPuntos representantes;
    int i = 0, rmenor;
    float distancia, dmenor;
    representantes.talla = 0;
    do {
        printf ( "\nCoordenada x en p_%d: ", representantes.talla );
        scanf ( "%f", &representantes.puntos[representantes.talla].x );
        printf ( "Coordenada y en p_%d: ", representantes.talla );
        scanf ( "%f", &representantes.puntos[representantes.talla].y );

        for (i = 0; i < representantes.talla; i++) {
            distancia = sqrt(pow(representantes.puntos[representantes.talla].x -
                                 representantes.puntos[i].x, 2) +
                             pow(representantes.puntos[representantes.talla].y -
                                 representantes.puntos[i].y, 2));
            if (!i) dmenor = distancia;
            if (distancia <= dmenor) {
                dmenor = distancia;
                rmenor = i;
            }
        }

        if (i) {
            printf ( "El punto más próximo es: p_%d (%.2f, %.2f) \n", 
                    rmenor, representantes.puntos[rmenor].x,
                    representantes.puntos[rmenor].y );
        }

        representantes.talla++;
    } while(!(representantes.puntos[representantes.talla - 1].x == 0 && 
            representantes.puntos[representantes.talla - 1].y == 0));

    return 0;
}

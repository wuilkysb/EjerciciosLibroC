/*
 * =============================================================================
 *
 *       Filename:  ej097.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19/10/13 08:28:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

#define TALLA 10

int main(void) {
    int i, a[TALLA], n, j, aux, ini, fin, centro;

    for (i = 0; i < TALLA; i++) {
        printf ( "Dame un número para el vector: " ); scanf ( "%d", &a[i] );
        if (a[i] < 0) {
            printf ( "El número ingresado debe ser un entero positivo.\n" );
            i--;
        }
    }

    for (i = 0; i < TALLA - 1; i++) {       // Ordenación burbuja.
        for (j = 0; j < TALLA - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                aux = a[j];
                a[j] = a[j + 1];
                a[j + 1] = aux;
            }
        }
    }

    do {
        ini = 0;
        fin = TALLA - 1;
        printf ( "Dame un número: " ); scanf ( "%d", &n );
        while(ini <= fin) {
            centro = (ini + fin) / 2;
            if (a[centro] == n) {
                printf ( "El número %d SI esta en el vector.\n", n );
                break;
            } else if (a[centro] > n) {
                fin = centro - 1;
            } else {
                ini = centro + 1;
            }
        }
        if (ini > fin) { printf ( "El número %d NO esta en el vector.\n", n );
        } 
    } while(n > 0);
    return 0;
}

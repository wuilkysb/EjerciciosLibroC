/*
 * =============================================================================
 *
 *       Filename:  ej094.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  18/10/13 13:43:10
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

#define TALLA 100
#define RANGO 10

int main(void) {
    int i, a[TALLA], aux, f = 0, n, m = 0;

    srand(2);
    for (i = 0; i < TALLA; i++) {
        a[i] = rand() % (RANGO + 1);
        printf ( "%d ", a[i] );
    }

    for (i = 0; i < TALLA - 1; i++) {       // Odenación
        if (a[i] > a[i + 1]) {
            aux = a[i];
            a[i] = a[i + 1];
            a[i + 1] = aux;
            if (i > 0) i -= 2;
        }
    }

    for (i = 0; i < TALLA - 1; i++) {
        if (a[i] == a[i + 1]){
            if (++f > m) {
                m = f;
                n = i;
            }
        } else {
            f = 0;
        }
    }
    printf ( "\nEl número que más veces aparece es: %d\n", a[n] );
    return 0;
}

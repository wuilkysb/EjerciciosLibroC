/*
 * =============================================================================
 *
 *       Filename:  ej091.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  18/10/13 09:16:51
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

#define TALLA 20
#define RANDOM 100

int main(void) {
    int i, m = 0, n = 0, t = 0, fin = 0;
    int a[TALLA];

    srand(5);
    for (i = 0; i < TALLA; i++) {
        a[i] = rand() % (RANDOM + 1);
        printf ( "%d ", a[i] );
        if (n < a[i]) {
            t++;
        } else {
            if (t > m) {
                m = t;
                fin = i;
            }
            t = 1;
        }
        n = a[i];
    }
    if (t > m) {
        m = t;
        fin = i;
    }
    printf ( "\nLa secuencia: " );
    for (i = fin - m; i < fin; i++) {
        printf ( "%d ", a[i] );
    }
    printf ( "Es la secuencia creciente mas larga de la serie.\n" );
    return 0;
}

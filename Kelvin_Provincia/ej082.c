/*
 * =============================================================================
 *
 *       Filename:  ej082.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/10/13 20:55:25
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

#define TALLA_POLINOMIO 11

int main(void) {
    float p[TALLA_POLINOMIO], q[TALLA_POLINOMIO], s[TALLA_POLINOMIO];
    int grado, i;
    char x;

    /* Lectura de p */
    do {
        printf ( "Grado de p (entre 0 y %d): ", TALLA_POLINOMIO - 1 );
        scanf ( "%d", &grado );
    } while(grado < 0 || grado >= TALLA_POLINOMIO);
    for (i = 0; i <= grado; i++) {
        printf ( "p_%d: ", i ); scanf ( "%f", &p[i] );
    }
    for (i = grado + 1; i < TALLA_POLINOMIO; i++) {
        p[i] = 0.0;
    }

    /* Lectura de q */
    do {
        printf ( "Grado de q (entre 0 y %d): ", TALLA_POLINOMIO - 1 );
        scanf ( "%d", &grado );
    } while(grado < 0 || grado >= TALLA_POLINOMIO);
    for (i = 0; i <= grado; i++) {
        printf ( "q_%d: ", i ); scanf ( "%f", &q[i] );
    }
    for (i = grado + 1; i < TALLA_POLINOMIO; i++) {
        q[i] = 0.0;
    }

    /* Cálculo de la suma */
    for (i = 0; i < TALLA_POLINOMIO; i++) {
        s[i] = p[i] + q[i];
    }

    /* Presentación del resultado */
    x = 0;
    printf ( "Suma: " );
    for (i = 0; i < TALLA_POLINOMIO; i++) {
        if (s[i] != 0) {
            if (x == 1) {
                printf ( "+ " );
            }
            x = 1;
            printf ( "%f ", s[i] );
            if (i > 0) {
                printf ( "x^%d ", i );
            }
        }
    }
    if (x == 0) {
        printf ( "%f", 0.0 );
    }
    printf ( "\n" );
    return 0;
}

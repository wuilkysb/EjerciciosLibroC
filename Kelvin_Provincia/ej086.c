/*
 * =============================================================================
 *
 *       Filename:  ej086.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/10/13 21:54:17
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
    float m[2 * TALLA_POLINOMIO - 1];
    int grado, i, j, talla_p, talla_q, talla;
    char x;

    /* Lectura de p */
    do {
        printf ( "Grado de p (entre 0 y %d): ", TALLA_POLINOMIO - 1 );
        scanf ( "%d", &grado );
    } while(grado < 0 || grado >= TALLA_POLINOMIO);
    talla_p = grado;
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
    talla_q = grado;
    for (i = 0; i <= grado; i++) {
        printf ( "q_%d: ", i ); scanf ( "%f", &q[i] );
    }
    for (i = grado + 1; i < TALLA_POLINOMIO; i++) {
        q[i] = 0.0;
    }

    talla = (talla_p > talla_q) ? talla_p : talla_q;

    /* Cálculo de la suma */
    for (i = 0; i <= talla; i++) {
        s[i] = p[i] + q[i];
    }

    /* Presentación del resultado */
    x = 0;
    printf ( "Suma: " );
    for (i = 0; i <= talla; i++) {
        if (s[i] != 0) {
            if (x++ != 0) {
                if (s[i] < 0) {
                    printf ( "- " );
                    x = -1;
                } else {
                    printf ( "+ " );
                    x = 1;
                }
            }
            printf ( "%f ", s[i] * x );
            if (i > 0) {
                printf ( "x^%d ", i );
            }
        }
    }
    if (x == 0) {
        printf ( "%f", 0.0 );
    }
    printf ( "\n" );

    /* Cálculo del producto */
    for (i = 0; i < 2 * talla + 1; i++) {
        m[i] = 0.0;
        for (j = 0; j <= i; j++) {
            if (j <= talla_p && i - j <= talla_q) {
                m[i] += p[j] * q[i - j];
            }
        }
    }

    /* Presentación del resultado */
    printf ( "Producto: %f ", m[0] );
    for (i = 1; i < 2 * talla + 1; i++) {
        printf ( "+ %f x^%d ", m[i], i );
    }
    printf ( "\n" );
    return 0;
}

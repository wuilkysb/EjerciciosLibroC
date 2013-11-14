/*
 * =============================================================================
 *
 *       Filename:  ej143.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/11/13 13:08:12
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

struct Polinomio {
    int grado;
    float coeficientes[TALLA_POLINOMIO];
};

int main(void) {
    struct Polinomio p, q, s;
    int i;

    /* Lectura de p */
    do {
        printf ( "Grado de p (entre 0 y %d): ", TALLA_POLINOMIO - 1 );
        scanf ( "%d", &p.grado );
    } while(p.grado < 0 || p.grado >= TALLA_POLINOMIO);
    for (i = 0; i <= p.grado; i++) {
        printf ( "p_%d: ", i ); scanf ( "%f", &p.coeficientes[i] );
    }
    for (i = p.grado + 1; i < TALLA_POLINOMIO; i++) {
        p.coeficientes[i] = 0.0;
    }

    /* Lectura de q */
    do {
        printf ( "Grado de q (entre 0 y %d): ", TALLA_POLINOMIO - 1 );
        scanf ( "%d", &q.grado );
    } while(q.grado < 0 || q.grado >= TALLA_POLINOMIO);
    for (i = 0; i <= q.grado; i++) {
        printf ( "q_%d: ", i ); scanf ( "%f", &q.coeficientes[i] );
    }
    for (i = q.grado + 1; i < TALLA_POLINOMIO; i++) {
        q.coeficientes[i] = 0.0;
    }

    /* Cálculo de la suma */
    s.grado = (p.grado > q.grado) ? p.grado : q.grado;
    for (i = 0; i <= s.grado; i++) {
        s.coeficientes[i] = p.coeficientes[i] + q.coeficientes[i];
    }

    /* Presentación del resultado */
    printf ( "Suma: %f ", s.coeficientes[0] );
    for (i = 1; i <= s.grado; i++) {
        printf ( "+ %f x^%d ", s.coeficientes[i], i );
    }
    printf ( "\n" );
    return 0;
}

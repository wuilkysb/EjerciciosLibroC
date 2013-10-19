/*
 * =============================================================================
 *
 *       Filename:  ej070.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  14/10/13 18:56:48
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

#define N 100

int main(void) {
    char criba[N];
    int i, j;

    /* Inicializacion */
    criba[0] = 0;
    for (i = 1; i < N; i++) {
        criba[i] = 1;
    }

    /* Criba de Eratóstenes */
    for (i = 2; i < sqrt(N); i++) {
        if (criba[i]) {
            for (j = 2; i * j < N; j++) {
                criba[i * j] = 0;
            }
        }
    }

    /* Mostrar los resultados */
    for (i = 0; i < N; i++) {
        if (criba[i]) {
            printf ( "%d\n", i );
        }
    }
    return 0;
}

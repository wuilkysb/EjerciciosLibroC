/*
 * =============================================================================
 *
 *       Filename:  ej092.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  18/10/13 12:51:36
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
#include <math.h>

#define TALLA 20
#define RANDOM 100
#define EJECUCIONES 1000

int main(void) {
    int i, e, m = 0, n = 0, t = 0, sum_longitudes = 0, sum_desv = 0;
    int a[TALLA], l[EJECUCIONES];
    float media;

    srand(3);
    for (e = 0; e < EJECUCIONES; e++) {
        for (i = 0; i < TALLA; i++) {
            a[i] = rand() % (RANDOM + 1);
            /* printf ( "%d ", a[i] ); */
            if (n < a[i]) {
                t++;
            } else {
                if (t > m) {
                    m = t;
                }
                t = 1;
            }
            n = a[i];
        }
        if (t > m) {
            m = t;
        }
        sum_longitudes += m;
        l[e] = m;
    }

    /* Cálculo de la media */
    media = sum_longitudes / EJECUCIONES;

    /* Cálculo de la deviación típica */
    for (i = 0; i < EJECUCIONES; i++) {
        sum_desv += (l[e] - media) * (l[e] - media);
    }

    printf ( "Longitud media   : %f\n", media );
    printf ( "Desviación típica: %f\n", sqrt(sum_desv / EJECUCIONES) );
    return 0;
}


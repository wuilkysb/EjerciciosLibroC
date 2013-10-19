/*
 * =============================================================================
 *
 *       Filename:  ej093.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  18/10/13 13:18:07
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
#define RANGO 1000

int main(void) {
    int a[TALLA], i, j, k, f;
    char e;

    for (i = 0; i < TALLA; i++) {
        a[i] = rand() % (RANGO + 1);
        printf ( "%d ", a[i] );
    }
    printf ( "\n\n" );

    for (i = 0; i < TALLA; i++) {
        f = 0;
        e = 0;
        for (j = i; j < TALLA; j++) {
            for (k = 0; k < i; k++) {
                if (a[i] == a[k]) {
                    e = 1;
                    break;
                }
            }
            if (e) break;
            if (a[i] == a[j]) {
                if (++f > 1) {
                    printf ( "%d ", a[i] );
                    break;
                }
            }
        }
    }
    return 0;
}

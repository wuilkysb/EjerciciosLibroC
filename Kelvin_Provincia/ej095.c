/*
 * =============================================================================
 *
 *       Filename:  ej095.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19/10/13 09:02:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

#define TALLA 100

int main(void) {
    int i, primos[TALLA], p = 0, j;
    char es;
    primos[0] = 2;
    i = 3;
    while(p < TALLA) {
        es = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                es = 0;
                break;
            }
        }
        if (es) {
            primos[++p] = i;
        }
        i += 2;
    }
    for (i = 0; i < TALLA; i++) {
        printf ( "%d ", primos[i] );
    }
    printf ( "\n" );
    return 0;
}

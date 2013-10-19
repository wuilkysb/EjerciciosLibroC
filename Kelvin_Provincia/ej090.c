/*
 * =============================================================================
 *
 *       Filename:  ej090.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  18/10/13 01:08:55
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
#define RANDOM 4

int main(void) {
    int i, a[TALLA], m = 0, n = 0, t = 0;
    srand(5);
    for (i = 0; i < TALLA; i++) {
        a[i] = rand() % (RANDOM + 1);
        printf ( "%d ", a[i] );
        if (n == a[i]) {
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
    printf ( "\n>> %d\n", m );
    return 0;
}

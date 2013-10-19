/*
 * =============================================================================
 *
 *       Filename:  ej068.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  14/10/13 17:31:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

#define TALLA 50

int main(void) {
    long fibo[TALLA];
    int i;
    fibo[0] = 1;
    fibo[1] = 1;
    for (i = 2; i < TALLA; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for (i = TALLA - 1; i >= 0; i--) {
        printf ( "%ld\n", fibo[i] );
    }
    return 0;
}

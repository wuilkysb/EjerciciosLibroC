/*
 * =============================================================================
 *
 *       Filename:  ej048.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/10/13 15:27:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

int main(void){
    long long r = 1;
    int n, i;
    printf ( "Dame un número entero: " ); scanf ( "%d", &n );
    for (i = n; i > 0; i--) {
        r *= i;
    }
    printf ( "El factorial de %d es %lld\n", n, r );
    return 0;
}

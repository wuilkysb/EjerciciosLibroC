/*
 * =============================================================================
 *
 *       Filename:  ej087.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/10/13 22:45:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

#define TALLA 10

int main(void) {
    int i, j, n[TALLA];
    for (i = 0; i < TALLA; i++) {
        printf ( "Dame el número %2d: ", i + 1 ); scanf ( "%d", &n[i] );
        for (j = 0; j < i; j++) {
            if (n[i] == n[j]) {
                printf ( "Ingrese un número distinto a los anteriores.\n" );
                i--;
            }
        }
    }
    printf ( "\n" );
    for (i = 0; i < TALLA; i++) {
        printf ( "El número %2d: %d\n", i + 1, n[i] );
    }
    return 0;
}

/*
 * =============================================================================
 *
 *       Filename:  ej096.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  18/10/13 19:02:39
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
    int i, a[TALLA], n;

    for (i = 0; i < TALLA; i++) {
        printf ( "Dame un número para el vector: " ); scanf ( "%d", &a[i] );
        if (a[i] < 0) {
            printf ( "El número ingresado debe ser un entero positivo.\n" );
            i--;
        }
    }

    do {
        printf ( "Dame un número: " ); scanf ( "%d", &n );
        for (i = 0; i < TALLA; i++) {
            if (n == a[i]) {
                printf ( "El número %d SI esta en el vector.\n", n );
                break;
            }
        }
        if (i == TALLA) {
            printf ( "El número %d NO esta en el vector.\n", n );
        }
    } while(n > 0);
    return 0;
}

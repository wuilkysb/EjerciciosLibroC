/*
 * =============================================================================
 *
 *       Filename:  ej047.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/10/13 15:01:16
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
    int i = 1, n, valor, m;
    printf ( "Dame un número binario: " ); scanf ( "%d", &n );
    while(n >= 1) {
        m = n % 10;
        n /= 10;
        if (m == 0 || m == 1) {
            valor += m * i;
        } else {
            printf ( "No ingreso un número binario.\n" );
            return 0;
        }
        i *= 2;
    }
    printf ( "Decimal -> %d\n", valor );
    return 0;
}

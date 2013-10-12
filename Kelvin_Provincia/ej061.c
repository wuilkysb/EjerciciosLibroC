/*
 * =============================================================================
 *
 *       Filename:  ej061.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/10/13 12:58:23
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
    int n, m, i;
    float s;
    printf ( "Dame un número para n: " ); scanf ( "%d", &n );
    do {
        printf ( "Dame un número para m: " ); scanf ( "%d", &m );
        if (n > m) {
            printf ( "El valor de m tiene que ser mayor o igual que n.\n" );
        }
    } while(n > m);
    for (i = n; i <= m; i++) {
        s += 1.0 / i;
    }
    printf ( "Resultado: %f\n", s );
    return 0;
}

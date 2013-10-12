/*
 * =============================================================================
 *
 *       Filename:  ej049.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/10/13 13:27:34
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
    long long n, m, f = 1, nm;
    int i;
    printf ( "Dame n: " ); scanf ( "%lld", &n );
    printf ( "Dame m: " ); scanf ( "%lld", &m );
    if (n < m) {
        printf ( "El valor de n tiene que ser mayor o igual que el valor de m.\n" );
    } else {
        nm = n - m;
        for (i = 2; i <= nm; i++) {
            f *= i;
        }
        nm = f;
        f = 1;
        for (i = 2; i <= n; i++) {
            f *= i;
        }
        n = f;
        f = 1;
        for (i = 2; i <= m; i++) {
            f *= i;
        }
        m = f;
        printf ( "Combinaciones: %lld\n", n / (nm * m) );
    }
    return 0;
}

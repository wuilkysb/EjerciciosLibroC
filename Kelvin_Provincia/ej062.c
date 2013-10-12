/*
 * =============================================================================
 *
 *       Filename:  ej062.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/10/13 13:08:22
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
    int n, i, j;
    printf ( "Dame un número: " ); scanf ( "%d", &n );
    if (n >= 2) printf ( "2\n" );
    for (i = 3; i <= n; i += 2) {
        for (j = 2; j < i; j++) {
            if (0 == i % j) {
                break;
            }
        }
        if (j == i) {
            printf ( "%d\n", i );
        }
    }
    return 0;
}

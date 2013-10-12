/*
 * =============================================================================
 *
 *       Filename:  ej053.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/10/13 18:58:28
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>
#include <math.h>

int main(void){
    int n, i;
    printf ( "Dame un numero entero: " ); scanf ( "%d", &n );
    for (i = 0; i <= n; i++) {
        printf ( "2**%d = %.0f\n", i, pow(2, i) );
    }
    return 0;
}

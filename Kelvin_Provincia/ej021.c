/*
 * =============================================================================
 *
 *       Filename:  ej021.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/10/13 19:40:21
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
    float x, a = 1;
    int i;
    printf ( "Dame el valor de x: " ); scanf ( "%f", &x );
    for (i = 0; i < 4; i++) {
        a *= x;
    }
    printf ( "Resultado: %f\n", a - x * x + 1 );

    return 0;
}

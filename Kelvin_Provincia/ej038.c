/*
 * =============================================================================
 *
 *       Filename:  ej038.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/10/13 09:59:38
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
    float a, b;
    printf ( "Dame el valor de a: " ); scanf ( "%f", &a );
    printf ( "Dame el valor de b: " ); scanf ( "%f", &b );
    if (a == 0) {
        if (b == 0) {
            printf ( "La ecuación tiene infinitas soluciones.\n" );
        } else {
            printf ( "La ecuación no tiene solución.\n" );
        }
    } else {
        printf ( "En ax+b=0; x=%f.\n", -b / a );
    }
    return 0;
}

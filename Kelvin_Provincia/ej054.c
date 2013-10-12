/*
 * =============================================================================
 *
 *       Filename:  ej054.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/10/13 19:07:26
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
    float euros, tasa, anyos, in = 1;
    int i;
    printf ( "Dame la Cantidad de euros: " ); scanf ( "%f", &euros );
    printf ( "Dame la tasa de interés: " ); scanf ( "%f", &tasa );
    printf ( "Dame el número de años: " ); scanf ( "%f", &anyos );
    for (i = 0; i < anyos; i++) {
        in *= 1 + tasa / 100;
    }
    euros *= in;
    printf ( "Capital: %f\n", euros );
    /* printf ( "Capital: %f \n", euros * pow(1 + tasa / 100, anyos) ); */
    return 0;
}

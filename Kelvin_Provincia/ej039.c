/*
 * =============================================================================
 *
 *       Filename:  ej039.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/10/13 10:09:36
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
    float a, b, c, d;
    printf ( "Dame el valor de a: " ); scanf ( "%f", &a );
    printf ( "Dame el valor de b: " ); scanf ( "%f", &b );
    printf ( "Dame el valor de c: " ); scanf ( "%f", &c );
    if (a == 0) {
         if (b == 0 && c == 0) {
             printf ( "La ecuación tiene infinitas soluciones.\n" );
         } else {
             printf ( "La ecuación no tiene solución.\n" );
         }
    } else {
        d = b * b - 4 * a * c;
        if (d < 0) {
            printf ( "La ecuación no tiene una solución real.\n" );
        } else if (d > 0) {
            printf ( "La ecuación tiene dos soluciones reales.\n" );
            printf ( "x1=%f y x2=%f\n", (-b + sqrt(d)) / (2 * a),
                                        (-b - sqrt(d)) / (2 * a) );
        } else {
            printf ( "La ecuación tiene una única solución real.\n" );
            printf ( "x=%f\n", -b / (2 * a) );
        }
    }
    return 0;
}

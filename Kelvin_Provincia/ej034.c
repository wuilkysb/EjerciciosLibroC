/*
 * =============================================================================
 *
 *       Filename:  ej034.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/10/13 13:28:23
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
    float a, b, c, s;
    printf ( "Lado 'a' del triángulo: " ); scanf ( "%f", &a );
    printf ( "Lado 'b' del triángulo: " ); scanf ( "%f", &b );
    printf ( "Lado 'c' del triángulo: " ); scanf ( "%f", &c );
    s = (a + b + c) / 2.0;
    printf ( "Perímetro: %f; área: %f\n", a + b + c, sqrt(s * (s - a) * (s - b) * (s - c)) );

    return 0;
}

/*
 * =============================================================================
 *
 *       Filename:  ej022.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/10/13 19:49:04
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
    float lado;
    printf ( "Longitud del lado del cuadrado: " ); scanf ( "%f", &lado );
    printf ( "Perímetro: %f; área: %f\n", 4 * lado, lado * lado );
    return 0;
}

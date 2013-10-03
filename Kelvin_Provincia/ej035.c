/*
 * =============================================================================
 *
 *       Filename:  ej035.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/10/13 13:52:01
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
    float r;
    printf ( "Dame el radio: " ); scanf ( "%f", &r );
    printf ( "Perímetro: %f; área: %f\n", 2 * M_PI * r, M_PI * pow(r, 2) );
    return 0;
}


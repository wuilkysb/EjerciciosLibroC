/*
 * =============================================================================
 *
 *       Filename:  ej025.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/10/13 22:30:22
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
    printf ( "Perímetro: %f; área: %f\n", 2 * M_PI * r, M_PI * r * r );
    return 0;
}


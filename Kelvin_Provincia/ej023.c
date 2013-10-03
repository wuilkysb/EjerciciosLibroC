/*
 * =============================================================================
 *
 *       Filename:  ej023.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/10/13 19:58:26
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
    float ladov, ladoh;
    printf ( "Lado 1 del rectángulo: " ); scanf ( "%f", &ladov );
    printf ( "Lado 2 del rectángulo: " ); scanf ( "%f", &ladoh );
    printf ( "Perímetro: %f; área: %f\n", 2 * ladoh + 2 * ladov, ladoh * ladov );
    return 0;
}

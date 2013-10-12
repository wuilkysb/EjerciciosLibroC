/*
 * =============================================================================
 *
 *       Filename:  ej057.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/10/13 10:35:46
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
    char car;
    printf ( "Dame un caracter: " ); scanf ( "%c", &car );
    if ( ('a' <= car && car <= 'z') || car == '_' ) {
        printf ( "Este caracter es válido en un identificador en C.\n" );
    } else {
        if (!(car < '0' || '9' < car)) {
            printf ( "Un dígito es válido en un identificador en C,");
            printf ( "siempre que no sea el primer caracter.\n" );
        } else {
            printf ( "Caracter no válido para formar un identificador en C.\n" );
        }
    }
    return 0;
}

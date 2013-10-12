/*
 * =============================================================================
 *
 *       Filename:  ej041.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/10/13 12:02:12
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
    char c;
    printf ( "Dame un caracter: " ); scanf ( "%c", &c );
    if (c >= 'a' && c <= 'z') {
        printf ( "Es una MINUSCULA\n" );
    } else if (c >= 'A' && c <= 'Z') {
        printf ( "Es una MAYUSCULA\n" );
    }
    return 0;
}

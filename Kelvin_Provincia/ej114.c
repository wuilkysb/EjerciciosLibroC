/*
 * =============================================================================
 *
 *       Filename:  ej114.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/10/13 16:15:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>
#include <string.h>

#define MAXLON 80

int main(void) {
    char verbo[MAXLON + 1], longitud, i;
    printf ( "Dame un verbo regular de la primera conjugación: " );
    scanf ( "%s", &verbo );
    longitud = strlen(verbo);
    printf ( "yo " );
    for (i = 0; i < longitud - 2; i++) {
        printf ( "%c", verbo[i] );
    }
    printf ( "o\n" );
    printf ( "tú " );
    for (i = 0; i < longitud - 1; i++) {
        printf ( "%c", verbo[i] );
    }
    printf ( "s\n" );
    printf ( "él " );
    for (i = 0; i < longitud - 1; i++) {
        printf ( "%c", verbo[i] );
    }
    printf ( "\n" );
    printf ( "nosotros " );
    for (i = 0; i < longitud - 1; i++) {
        printf ( "%c", verbo[i] );
    }
    printf ( "mos\n" );
    printf ( "vosotros " );
    for (i = 0; i < longitud - 2; i++) {
        printf ( "%c", verbo[i] );
    }
    printf ( "áis\n" );
    printf ( "ellos " );
    for (i = 0; i < longitud - 1; i++) {
        printf ( "%c", verbo[i] );
    }
    printf ( "n\n" );
    return 0;
}

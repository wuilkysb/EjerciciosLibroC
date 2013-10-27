/*
 * =============================================================================
 *
 *       Filename:  ej110.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/10/13 18:10:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

#define MAXLON 250

int main(void) {
    char nombre[MAXLON + 1], i, inicial;
    char palabra[MAXLON + 1];
    do {
        inicial = 1;
        printf ( "Dame tu nombre completo: " ); gets(nombre);
        for (i = 0; nombre[i]; i++) {
            if (nombre[i] == 32) {
                inicial = 1;
                continue;
            }
            if (!inicial) {
                continue;
            }
            inicial = 0;
            if (nombre[i] >= 'a' && nombre[i] <= 'z') {
                printf ( "%c. ", nombre[i] - 32 );
            } else {
                printf ( "%c. ", nombre[i] );
            }
        }
        printf ( "\n" );
    } while(nombre[0]);
    return 0;
}

/*
 * =============================================================================
 *
 *       Filename:  ej105.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/10/13 13:50:19
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
    char cadena[MAXLON + 1], i, longitud;
    printf ( "Dame un cadena: " ); scanf ( "%s", cadena );
    longitud = strlen(cadena);
    for (i = 0; i < longitud; i++) {        // Pasar a minúsculas.
        if (cadena[i] >= 'A' && cadena[i] <= 'Z') {
            cadena[i] += 32;
        }
    }
    for (i = 0; i < longitud / 2; i++) {
        if (cadena[i] != cadena[longitud - i - 1]) {
            printf ( "La palabra \"%s\" NO es palíndromo.\n", cadena );
            return 0;
        }
    }
    printf ( "La palabra \"%s\" SI es palíndromo.\n", cadena );
    return 0;
}

/*
 * =============================================================================
 *
 *       Filename:  ej104.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/10/13 13:39:46
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
    char cadena[MAXLON + 1], i, longitud, aux;
    printf ( "Dame una cadena: " ); gets(cadena);
    longitud = strlen(cadena);
    for (i = 0; i < longitud / 2; i++) {
        aux = cadena[i];
        cadena[i] = cadena[longitud - i - 1];
        cadena[longitud - i - 1] = aux;
    }
    printf ( "La cadena invertida es: %s\n", cadena );
    return 0;
}

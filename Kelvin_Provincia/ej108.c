/*
 * =============================================================================
 *
 *       Filename:  ej108.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/10/13 17:43:23
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
    char cadena1[MAXLON + 1], cadena2[MAXLON + 1], i, longitud, x = 0, indice = 0;
    printf ( "Dame una cadena: " ); gets(cadena1);
    printf ( "Dame una segunda cadena: " ); gets(cadena2);
    longitud = strlen(cadena2);
    for (i = 0; cadena1[i]; i++) {
        if (cadena1[i] == cadena2[x]) {
            if (++x == longitud) {
                indice = i + 1 - x;
            }
        } else {
            x = 0;
        }
    }
    if (indice) {
        printf ( "El indice es: %d\n", indice );
    } else {
        printf ( "La cadena \"%s\" no esta dentro de la cadena \"%s\"\n", cadena2,
                cadena1 );
    }
    return 0;
}

/*
 * =============================================================================
 *
 *       Filename:  ej101.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/10/13 10:44:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

#define MAXLON 80

int main(void) {
    char cadena[MAXLON + 1], encriptada[MAXLON + 1];
    int i = -1;
    printf ( "Dame una cadena: " ); gets(cadena);
    while(cadena[++i] != '\0') {
        if (!((cadena[i] >=  'a' && cadena[i] <= 'z') || (cadena[i] >= 'A' && cadena[i] <= 'Z'))) {
            encriptada[i] = cadena[i];
        } else if (cadena[i] == 'z' || cadena[i] == 'Z') {
            encriptada[i] = cadena[i] - 25;
        } else {
            encriptada[i] = cadena[i] + 1;
        }
    }
    encriptada[i] = '\0';
    printf ( "\"%s\" -> \"%s\"\n", cadena, encriptada );
    return 0;
}

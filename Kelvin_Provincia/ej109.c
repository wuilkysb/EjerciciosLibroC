/*
 * =============================================================================
 *
 *       Filename:  ej109.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/10/13 17:49:23
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
    char cadena[MAXLON + 1], i, copia[MAXLON + 1], longitud, ini, fin;
    printf ( "Dame un cadena: " ); gets(cadena);
    longitud = strlen(cadena);
    for (ini = 0; cadena[ini] == 32; ini++);
    for (fin = longitud - 1; cadena[fin] == 32; fin--);
    for (i = 0; i <= fin - ini; i++) {
        copia[i] = cadena[i + ini];
    }
    printf ( "\"%s\" -> \"%s\"\n", cadena, copia );
    return 0;
}

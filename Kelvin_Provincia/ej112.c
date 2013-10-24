/*
 * =============================================================================
 *
 *       Filename:  ej112.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/10/13 14:35:08
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
    char linea[MAXLON + 1], i, palabras, p;
    printf ( "Dame una frase: " ); gets(linea);
    if (linea[0] != 32 && linea[0]) {
        palabras++;
    }
    for (i = 0; linea[i]; i++) {
        if (linea[i] == 32) {
            p = 1;
            continue;
        }
        if (p) {
            palabras++;
            p = 0;
        }
    }
    printf ( "En \"%s\" hay %d palabras\n", linea, palabras );
    return 0;
}

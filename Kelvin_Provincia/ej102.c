/*
 * =============================================================================
 *
 *       Filename:  ej102.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/10/13 11:33:43
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
    char cadena[MAXLON + 1], lower[MAXLON + 1], i = -1;

    printf ( "Dame una cadena: " ); gets(cadena);
    while(cadena[++i] != '\0') {
        if (cadena[i] >= 'A' && cadena[i] <= 'Z') {
            lower[i] = cadena[i] + 32;
        } else {
            lower[i] = cadena[i];
        }
    }
    lower[i] = '\0';
    printf ( "\"%s\" >> \"%s\"\n", cadena, lower );
    return 0;
}

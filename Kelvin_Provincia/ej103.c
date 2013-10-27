/*
 * =============================================================================
 *
 *       Filename:  ej103.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/10/13 11:47:33
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
    char cadena[MAXLON + 1], lower[MAXLON + 1], i = -1;

    printf ( "Dame una cadena: " ); gets(cadena);
    strcpy(lower, cadena);
    while(lower[++i] != '\0') {
        if (lower[i] >= 'A' && lower[i] <= 'Z') {
            lower[i] += 32;
        }
    }
    printf ( "\"%s\" >> \"%s\"\n", cadena, lower );
    return 0;
}

/*
 * =============================================================================
 *
 *       Filename:  ej121.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/10/13 19:48:34
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
#include <ctype.h>

#define  MAXLON 80

int main(void) {
    char a[MAXLON + 1], b[MAXLON + 1];
    int longitud, i, j;

    printf ( "Introduce una cadena (máx. %d cars.): ", MAXLON ); gets(a);
    longitud = strlen(a);
    j = 0;
    for (i = 0; i < longitud - 1; i++) {
        if (!isspace(a[i]) || (isspace(a[i]) && !isspace(a[i + 1]) && j > 0)) {
            b[j++] = a[i];
        }
    }
    if (!isspace(a[i])) {
        b[j++] = a[i];
    }
    b[j] = '\0';
    printf ( "La cadena normalizada es \"%s\"\n", b );
    return 0;
}

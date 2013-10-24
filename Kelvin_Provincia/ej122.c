/*
 * =============================================================================
 *
 *       Filename:  ej122.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/10/13 20:13:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>
#include <ctype.h>

#define MAXLON 80

int main(void) {
    char frase[MAXLON + 1], cadena[MAXLON + 1], x, temp;
    int i, j;
    x = -1;
    j = 0;
    printf ( "Dame un frase: " ); gets(frase);
    for (i = 0; frase[i]; i++) {
        if (isalpha(frase[i])) {
            if (x == -1) {
                x = (islower(frase[i])) ? 1 : 0;
            }
            temp = (islower(frase[i])) ? 1 : 0;
            if (temp == x) {
                cadena[j++] = frase[i];
            }
        }
    }
    cadena[j] = '\0';
    printf ( ">> %s\n", cadena );
    return 0;
}

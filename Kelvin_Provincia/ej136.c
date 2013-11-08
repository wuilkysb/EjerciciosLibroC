/*
 * =============================================================================
 *
 *       Filename:  ej136.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  05/11/13 12:52:14
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

#define MAXLON      1000
#define MAXPAL      500
#define MAXLONPAL   28

int main(void) {
    char texto[MAXLON + 1], palabras[MAXPAL][MAXLONPAL + 1],
         palabra[MAXLONPAL + 1];
    int i, j, p = 0, encontrada;
    printf ( "Dame un texto: " ); gets(texto);
    for (i = 0; texto[i]; i++) {
        j = 0;
        while(isalnum(texto[i])) {
            if (j < MAXLONPAL) palabra[j++] = texto[i];
            i++;
        }
        if (!j) continue;
        i--;
        palabra[j] = '\0';

        encontrada = 0;
        for (j = 0; j < p; j++) {
            if (!strcmp(palabra, palabras[j])){
                encontrada = 1;
                break;
            }
        }
        if (!encontrada) {
            strcpy(palabras[p++], palabra);
        }
    }

    for (i = 0; i < p; i++) {
        printf ( "%s\n", palabras[i] );
    }
    return 0;
}

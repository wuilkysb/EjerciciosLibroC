/*
 * =============================================================================
 *
 *       Filename:  ej124.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/10/13 20:50:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

#define MAXLON 1000
#define ALFABETO 26

int main(void) {
    char texto[MAXLON + 1];
    int alfabeto[ALFABETO], i;
    printf ( "Dame un texto: " ); gets(texto);

    /* Inicializacion del vector contador */
    for (i = 0; i < ALFABETO; i++) {
        alfabeto[i] = 0;
    }

    /* Ĉálculos de frecuencia de las lettras */
    for (i = 0; texto[i]; i++) {
        if (isalpha(texto[i])) {
            alfabeto[tolower(texto[i]) - 'a']++;
        }
    }

    /* Mostrando resultados */
    for (i = 0; i < ALFABETO; i++) {
        printf ( "| %c | %4d |\n", i + 'a', alfabeto[i] );
    }
    return 0;
}

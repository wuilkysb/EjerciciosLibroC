/*
 * =============================================================================
 *
 *       Filename:  ej106.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/10/13 14:07:01
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

#define MAXLON 250

int main(void) {
    unsigned char frase[MAXLON + 1], i, longitud, longitud_media, fin, j;
    char paso, excepciones[] = {58, 59, 32, 46, 44, '?', '!'}; //" ,;.:?!";
    printf ( "Dame una frase: " ); gets(frase);
    longitud = strlen(frase);
    longitud_media = longitud / 2;
    for (i = 0; i < longitud_media + paso; i++) {
        /* if (frase[i] == 32 || frase[i] == '!' || frase[i] == '?' || */
        /*     frase[i] == '¡' || frase[i] == '¿') { */
        /*     paso++; */
        /*     continue; */
        /* } */
        for (j = 0; excepciones[j]; j++) {
            if (frase[i] == excepciones[j]) {
                paso++;
                break;
            }
        }
        if (excepciones[j]) continue;

        fin = longitud - i - 1 + paso;
        /* while (frase[fin] == 32 || frase[fin] == '!' || frase[fin] == '?' || */
        /*     frase[fin] == '¡' || frase[fin] == '¿'){ */
        /*     paso--; */
        /*     fin--; */
        /* } */
        do {
            for (j = 0; excepciones[j]; j++) {
                if (frase[fin] == excepciones[j]) {
                    paso--;
                    fin--;
                    break;
                }
            }
        } while(excepciones[j]);
        if (tolower(frase[i]) != tolower(frase[fin])) {
            printf ( "La frase NO es palíndromo.\n" );
            return 0;
        }
    }
    printf ( "La frase SI es palíndromo.\n" );
    return 0;
}

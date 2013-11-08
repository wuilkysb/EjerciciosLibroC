/*
 * =============================================================================
 *
 *       Filename:  ej139.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/11/13 19:48:43
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

int main(void) {
    char enfermedades[10][20] = { "gripe", "indigestion", "catarro", "a", "b",
                                "c", "d", "e", "f", "g" };
    char sintomas[10][20] = { "fiebre", "tos", "dolor de cabeza", "1", "2", "3",
                            "4", "5", "6", "7" };
    char sintomatologia[10][10] = { { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
                                    { 1, 0, 1, 1, 0, 0, 1, 0, 0, 0 },
                                    { 1, 0, 1, 1, 0, 0, 1, 0, 0, 0 },
                                    { 1, 0, 1, 1, 0, 0, 1, 0, 0, 0 },
                                    { 1, 0, 1, 1, 0, 0, 1, 0, 0, 0 },
                                    { 0, 0, 1, 1, 0, 0, 1, 0, 0, 0 },
                                    { 1, 0, 1, 1, 0, 0, 1, 0, 0, 0 },
                                    { 1, 0, 1, 1, 0, 0, 1, 0, 0, 0 },
                                    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
                                    { 1, 0, 1, 1, 0, 0, 1, 0, 0, 1 }, };
    char sintomasmostrados[10],  s[10];
    char linea[25];
    char op;
    int i, j, c;
    for (i = 0; i < 10; i++) {
        do {
            op = '\0';
            printf ( "%s  <s>/<n>: ", sintomas[i] );
            gets(linea); sscanf ( linea,  "%c", &op );
        } while(!(op == 's' || op == 'n'));
        sintomasmostrados[i] = (op == 's') ? 1 : 0;
        s[i] = 1 + i;
    }
    i = 0;
    while(s[0] && i < 10) {
        j = 0;
        c = 0;
        while(s[j] && j < 10) {
            if (sintomasmostrados[i] == sintomatologia[s[j] - 1][i]) {
                s[c++] = s[j];
            }
            j++;
        }
        s[c] = 0;
        i++;
    }

    for (i = 0; s[i]; i++) {
        printf ( "\nLa enfermedad que padece es: \"%s\"\n",
                enfermedades[s[i] - 1] );
    }
    if (!i) {
        printf ( "\nNo se puede emitir un diagnóstico fiable.\n" );
    }
    return 0;
}

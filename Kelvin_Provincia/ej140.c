/*
 * =============================================================================
 *
 *       Filename:  ej140.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/11/13 10:05:47
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
                                    { 1, 0, 1, 1, 0, 0, 0, 0, 0, 0 },
                                    { 0, 0, 1, 1, 0, 0, 1, 0, 0, 0 },
                                    { 1, 0, 1, 1, 0, 0, 0, 0, 0, 0 },
                                    { 1, 0, 1, 1, 0, 0, 1, 0, 0, 0 },
                                    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
                                    { 1, 0, 1, 1, 0, 0, 1, 0, 0, 1 }, };
    char sintomasmostrados[10],  s[10][2];
    char linea[25];
    char op, aux;
    int i, j;
    for (i = 0; i < 10; i++) {
        do {
            op = '\0';
            printf ( "%s  (s / n): ", sintomas[i] );
            gets(linea); sscanf ( linea,  "%c", &op );
        } while(!(op == 's' || op == 'n'));
        sintomasmostrados[i] = (op == 's') ? 1 : 0;
        s[i][0] = i;
        s[i][1] = 0;
    }
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (sintomasmostrados[i] == sintomatologia[j][i]) {
                s[j][1]++;
            }
        }
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (s[j][1] < s[j + 1][1]) {
                aux = s[j][1];
                s[j][1] = s[j + 1][1];
                s[j + 1][1] = aux;

                aux = s[j][0];
                s[j][0] = s[j + 1][0];
                s[j + 1][0] = aux;
            }
        }
    }

   if (s[0][1] == 10) {
        printf ( "La enfermedad que padece es: \"%s\"\n", enfermedades[s[0][0]] );
    } else {
        printf ( "Enfermedades:\n" );
        for (i = 0; i < 3; i++) {
            printf ( "%d. %s (%d0%)\n", i + 1, enfermedades[s[i][0]], s[i][1]);
        }
    }
    return 0;
}

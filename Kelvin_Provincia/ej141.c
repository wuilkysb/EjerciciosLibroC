/*
 * =============================================================================
 *
 *       Filename:  ej141.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/11/13 12:12:30
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

#define MAXLON 10
#define MORSE 128

int main(void) {
    int i, j;
    char morse[MORSE][10], texto[MAXLON + 1], c;
    char punto[4] = "STOP";
    for (i = 0; i < MORSE; i++) {
        strcpy(morse[i], "");
    }
    strcpy(morse['A'], ".-");
    strcpy(morse['B'], "-...");
    strcpy(morse['C'], "-.-.");
    strcpy(morse['D'], "-..");
    strcpy(morse['E'], ".");
    strcpy(morse['F'], "..-.");
    strcpy(morse['G'], "--.");
    strcpy(morse['H'], "....");
    strcpy(morse['I'], "..");
    strcpy(morse['J'], ".---");
    strcpy(morse['K'], "-.-");
    strcpy(morse['L'], ".-..");
    strcpy(morse['M'], "--");
    strcpy(morse['N'], "-.");
    strcpy(morse['O'], "---");
    strcpy(morse['P'], ".--.");
    strcpy(morse['Q'], "--.-");
    strcpy(morse['R'], ".-.");
    strcpy(morse['S'], "...");
    strcpy(morse['T'], "-");
    strcpy(morse['U'], "..-");
    strcpy(morse['V'], "...-");
    strcpy(morse['W'], ".--");
    strcpy(morse['X'], "-..-");
    strcpy(morse['Y'], "-.--");
    strcpy(morse['Z'], "--..");
    strcpy(morse['0'], "-----");
    strcpy(morse['1'], ".----");
    strcpy(morse['2'], "..---");
    strcpy(morse['3'], "...--");
    strcpy(morse['4'], "....-");
    strcpy(morse['5'], ".....");
    strcpy(morse['6'], "-....");
    strcpy(morse['7'], "--...");
    strcpy(morse['8'], "---..");
    strcpy(morse['9'], "----.");

    printf ( "Dame un texto: " ); gets(texto);
    for (i = 0; texto[i]; i++) {
        if (texto[i] == 32) continue;
        if (texto[i] == '.') {
            for (j = 0; j < 4; j++) {
                printf ( "%s ", morse[punto[j]] );
            }
        }
        c = toupper(texto[i]);
        if (strlen(morse[c]) > 0) {
            printf ( "%s ", morse[c] );
        }
        if (texto[i + 1] == 32 || texto[i + 1] == '.') printf ( "   " );
    }
    return 0;
}

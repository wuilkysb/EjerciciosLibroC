/*
 * =============================================================================
 *
 *       Filename:  em142.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/11/13 16:45:20
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

#define TMORSE  500
#define TALFA   50
#define MAXLON  10
#define ALFAM   26
#define NUMBERM 10

int main(void) {
    char textm[TMORSE + 1], texta[TALFA    + 1], codmorse[MAXLON + 1], aon;
    int i, j, m = 0, e = 0;
    char morse[ALFAM + NUMBERM][MAXLON + 1] = {
        ".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",  "....", "..",
        ".---", "-.-",  ".-..", "--",   "-.",   "---",  ".--.", "--.-", ".-.",
        "...",  "-",    "..-",  "...-", ".--",  "-..-", "-.--", "--..",
        "-----",".----","..---","...--","....-",".....","-....","--...","---..",
        "----."
    };
    printf ( "Dame texto en código morse: " ); gets(textm);
    for (i = 0; textm[i]; i++) {
        if (textm[i] == 32) continue;
        if (textm[i] == '.' || textm[i] == '-') {
            codmorse[m++] = textm[i];
        } else {
            printf ( "Error!: caracter \"%c\" no pertenece al codigo morse.\n",
                    textm[i] );
            break;
        }
        if (textm[i + 1] == 32 || textm[i + 1] == '\0') {
            codmorse[m] = '\0';
            for (j = 0; j < ALFAM + NUMBERM; j++) {
                if (strcmp(codmorse, morse[j]) == 0) {
                    aon = (j < ALFAM) ? 'A' : '0';
                    sprintf(texta, "%s%c", texta, j % ALFAM + aon);
                    break;
                }
            }
            if (j == ALFAM + NUMBERM){
                printf ( "e%d: Error: el codigo \"%s\" no se encuentra.\n", ++e,
                        codmorse);
                sprintf(texta, "%s%s%d%s", texta, "[e", e, "]");
            }
            m = 0;
        }
    }
    if (!textm[i]) {
        printf ( "%s.\n", texta );
    }
    return 0;
}

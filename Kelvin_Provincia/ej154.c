/*
 * =============================================================================
 *
 *       Filename:  ej154.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19/11/13 18:02:31
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

char toUpper(char c) {
    if (c >= 'a' && c <= 'z') return c - 32;
    return c;
}

int main(void) {
    char caracter;
    printf ("Dame una letra: "); scanf ("%c", &caracter);
    printf ("%c\n", toUpper(caracter));
    return 0;
}

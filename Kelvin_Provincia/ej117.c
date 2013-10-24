/*
 * =============================================================================
 *
 *       Filename:  ej117.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/10/13 18:47:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

#define MAXLON 80

int main(void) {
    char a[MAXLON + 1], b[MAXLON + 1], rpta = 0, i;
    printf ( "Dame un cadena: " ); gets(a);
    printf ( "Dame otra cadena: " ); gets(b);
    for (i = 0; a[i] && b[i]; i++) {
        if (a[i] != b[i]) {
            rpta = (a[i] > b[i]) ? 1 : -1;
            break;
        }
    }
    rpta = (rpta != 0) ? rpta : (a[i] == b[i]) ? 0 : (a[i] == '\0') ? -1 : 1;
    printf ( "%d\n", rpta );
    return 0;
}

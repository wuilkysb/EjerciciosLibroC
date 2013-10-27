/*
 * =============================================================================
 *
 *       Filename:  ej115.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/10/13 18:41:26
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

#define MAXLON 80

int main(void) {
    char a[MAXLON + 1], b[MAXLON + 1];
    printf ( "Dame un cadena: " ); gets(a);
    printf ( "Dame otra cadena: " ); gets(b);
    if (strcmp(a, b) <= 0) {
        printf ( "menor o igual.\n" );
    }
    return 0;
}

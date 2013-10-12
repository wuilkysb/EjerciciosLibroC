/*
 * =============================================================================
 *
 *       Filename:  ej050.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/10/13 17:02:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

int main(void){
    int a = 127, b = 1024, c, i;

    c = a ^ b;

    printf ( "%d\n", c );

    a = 2147483647;
    for (i = 0; i < 8*sizeof(a); i++) {
        printf ( "%d", ((c & a) != 0) ? 1 : 0 );
        a >>= 1;
    }
    printf ( "\n" );

    a = 1;
    for (i = 0; i < 8*sizeof(a); i++) {
        if ((c & a) != 0) c >>= 1;
        else c <<= 1;
        a <<= 1;
    }

    a = 2147483647;
    for (i = 0; i < 8*sizeof(a); i++) {
        printf ( "%d", ((c & a) != 0) ? 1 : 0 );
        a >>= 1;
    }
    printf ( "\n" );
    return 0;
}

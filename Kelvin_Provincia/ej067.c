/*
 * =============================================================================
 *
 *       Filename:  ej067.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  14/10/13 17:19:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

#define TALLA 100

int main(void) {
    char a[TALLA];
    int i;
    for (i = 0; i < TALLA; i++) {
        a[i] = (i % 2 == 0) ? 0 : 1;
        printf ( "%hhd\n", a[i] );
    }
    return 0;
}

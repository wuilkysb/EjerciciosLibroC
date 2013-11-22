/*
 * =============================================================================
 *
 *       Filename:  ej166.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/11/13 11:45:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

void dibujaTrinagulo(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf ("*");
        }
        printf ("\n");
    }
}

int main(void) {
    int n;
    printf ("Dame un número: "); scanf ("%d", &n);
    dibujaTrinagulo(n);
    return 0;
}

/*
 * =============================================================================
 *
 *       Filename:  ej160.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/11/13 10:25:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

char esPerfecto(int n) {
    int i, s = 0;
    for (i = 1; i < n; i++) {
        if (n % i == 0) s += i;
    }
    if (n != s) return 0;

    return 1;
}

int main(void) {
    int numero;
    printf ("Dame un número: "); scanf ("%d", &numero);
    printf ("> %d\n", esPerfecto(numero));
    return 0;
}

/*
 * =============================================================================
 *
 *       Filename:  ej156.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19/11/13 18:18:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

int factorial(int n) {
    int f = 1, i;
    for (i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}

int main(void) {
    int numero;
    printf ("Dame un número: "); scanf ("%d", &numero);
    printf ("El factorial de %d es %d\n", numero, factorial(numero));
    return 0;
}

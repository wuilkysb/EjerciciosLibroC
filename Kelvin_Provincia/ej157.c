/*
 * =============================================================================
 *
 *       Filename:  ej157.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19/11/13 18:28:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

float potencia(float x, int n) {
    float r = 1;
    int i;
    if (n < 0) { 
        x = 1 / x;
        n *= -1;
    }
    for (i = 0; i < n; i++) {
        r *= x;
    }
    return r;
}

int main(void) {
    float base;
    int exponente;
    printf ("Dame un número: "); scanf ("%f", &base);
    printf ("Dame un número entero: "); scanf ("%d", &exponente);
    printf ("%.2f ** %d = %.3f\n", base, exponente, potencia(base, exponente));
    return 0;
}

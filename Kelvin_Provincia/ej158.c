/*
 * =============================================================================
 *
 *       Filename:  ej158.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/11/13 09:27:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>
#include <math.h>

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

int factorial(int n) {
    int f = 1, i;
    for (i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}

float dtaylor(int x, int n) {
    float e = 0;
    int i;
    for (i = 0; i <= n; i++) {
        e += potencia(x, i) / factorial(i);
    }
    return e;
}

int main(void) {
    int x, n;
    printf ("Dame valor de x en (e^x): "); scanf ("%d", &x);
    printf ("Dame un número de términos: "); scanf ("%d", &n);
    printf ("> %f\n", dtaylor(x, n));
    printf ("> %f\n", exp(x));
    return 0;
}

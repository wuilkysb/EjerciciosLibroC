/*
 * =============================================================================
 *
 *       Filename:  ej159.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/11/13 09:57:15
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

double potencia(float x, int n) {
    double r = 1;
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

long long factorial(int n) {
    long long f = 1;
    int i;
    for (i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}

float cosTaylor(float x, int n) {
    double c = 1;
    int i;
    char signo = 1;
    for (i = 2; i <= n; i += 2) {
        signo = (signo == 1) ? -1 : 1;
        c += (potencia(x, i) / factorial(i)) * signo;
    }
    return c;
}

int main(void) {
    int n;
    float x;
    printf ("Dame x para (cos(x)): "); scanf ("%f", &x);
    printf ("Dame un número de términos: "); scanf ("%d", &n);
    printf ("> %f\n", cosTaylor(x, n));
    printf ("> %f\n", cos(x));
    return 0;
}

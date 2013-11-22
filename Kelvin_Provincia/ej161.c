/*
 * =============================================================================
 *
 *       Filename:  ej161.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/11/13 10:36:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

char len(int n) {
    char l = 1;
    while((n /= 10) > 0) l++;
    return l;
}

char getDigito(int n, int indice) {
    int i;
    char l = len(n);
    for (i = 0; i < l - indice - 1; i++) {
        n /= 10;
    }
    return n % 10;
}

char esCapicua(int n) {
    char l;
    int i;
    l = len(n);
    for (i = 0; i < l / 2; i++) {
        if (getDigito(n, i) != getDigito(n, l - i - 1)) return 0;
    }
    return 1;
}

int main(void) {
    int numero;
    printf ("Dame un número entero: "); scanf ("%d", &numero);
    (esCapicua(numero)) ? printf ("Es capicúa\n") : printf ("No es capicúa\n");
    return 0;
}

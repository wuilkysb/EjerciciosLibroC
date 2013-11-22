/*
 * =============================================================================
 *
 *       Filename:  ej153.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19/11/13 17:39:28
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

typedef struct {
    float x, y;
} Punto;

float distanciaPuntoRecta(int a, int b, int c, Punto p) {
    if (a == 0 && b == 0) return 0;
    return (a * p.x + b * p.y + c) / sqrt(a * a + b * b);
}

int main(void) {
    Punto punto;
    int a, b, c;
    printf ("Recta:\n");
    printf ("Dame el valor de A: "); scanf ("%d", &a);
    printf ("Dame el valor de B: "); scanf ("%d", &b);
    printf ("Dame el valor de C: "); scanf ("%d", &c);
    printf ("Punto:\n");
    printf ("Dame el valor de x: "); scanf ("%f", &punto.x);
    printf ("Dame el valor de y: "); scanf ("%f", &punto.y);

    printf ("La ditancia entre el punto p(%.2f, %.2f) y la recta %dx + %dy + %d"
            " es: %f\n", punto.x, punto.y, a, b, c,
            distanciaPuntoRecta(a, b, c, punto));
    return 0;
}

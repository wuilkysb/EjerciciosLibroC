/*
 * =====================================================================================
 *
 *       Filename:  ej005.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/10/13 20:56:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author: Alejandro Riera (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main() {
    float a,b,r;
    printf("Valor de a: \n");
    scanf("%f",&a);
    printf("Valor de b: \n");
    scanf("%f",&b);

    if (a != 0 ) {
        r = -b/a;
        printf("Solucion: %f\n", r);
    }

    else {
        if (b != 0) {
            printf("La ecuacion no tiene solucion\n");
            }
        else {
            printf("La ecuacion tiene infinitas soluciones\n");
        }
}
    return 0;
}



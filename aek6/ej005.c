/*
 * =====================================================================================
 *
 *       Filename:  ej005.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  22/09/13 11:28:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(void){
    float a, b, x;

    printf("Valor de a: ");
    scanf("%f", &a);
    printf("Valor de b: ");
    scanf("%f", &b);

    if (a != 0){
        x = -b/a;
        printf("Solución: %f", x);
    }else{
        if  (b != 0){
            printf("La ecuación no tiene solución.");
        }else{
            printf("La ecuación tiene infinitas soluciones.");
        }
    }
    return 0;
}


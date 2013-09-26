/*
 * =====================================================================================
 *
 *       Filename:  ej002.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  22/09/13 10:51:09
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
    int a, b, maximo;
    printf("Dame el primer número: ");
    scanf("%d", &a);
    printf("Dame el segundo número: ");
    scanf("%d", &b);

    if (a >= b) {
        maximo = a;
    }else{
        maximo = b;
    }

    printf("El máximo es: %d", maximo);
    return 0;
}


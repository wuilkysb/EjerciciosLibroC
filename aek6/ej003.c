/*
 * =====================================================================================
 *
 *       Filename:  ej003.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  22/09/13 11:02:43
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
    int n, m;

    printf("Dame un número: ");
    scanf("%d", &n);
    printf("Dame otro número: ");
    scanf("%d", &m);

    if (n * m == 100){
        printf("El producto %d * %d es igual a 100", n, m);
    }else{
        printf("El producto %d * %d es distinto de 100", n, m);
    }

    return 0;
}

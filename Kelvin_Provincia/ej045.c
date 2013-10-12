/*
 * =============================================================================
 *
 *       Filename:  ej045.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/10/13 14:40:28
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

int main(void){
    int n;
    printf ( "Dame un número entero diferente de 1: " ); scanf ( "%d", &n );
    do {
        printf ( "%d\n", n );
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n *= 3;
            n++;
        }
    } while(n != 1);
    return 0;
}

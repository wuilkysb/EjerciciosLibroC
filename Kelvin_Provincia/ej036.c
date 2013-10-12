/*
 * =============================================================================
 *
 *       Filename:  ej036.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/10/13 07:14:39
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
    printf ( "Dame un número entero: " ); scanf ( "%d", &n );
    if (n == (2 * (n / 2))) {
        printf ( "El número %d es par.\n", n );
    } else {
        printf ( "El número %d es impar.\n", n );
    }
    return 0;
}

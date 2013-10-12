/*
 * =============================================================================
 *
 *       Filename:  ej037.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/10/13 07:24:04
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
    int n1, n2;
    printf ( "Dame un número entero: " ); scanf ( "%d", &n1 );
    printf ( "Dame otro número entero: " ); scanf ( "%d", &n2 );
    if (n2 == n1*n1) {
        printf ( "El segundo es el cuadrado exacto del primero.\n" );
    } else if (n2 < n1*n1) {
        printf ( "El segundo es menor que el cuadrado del primero.\n" );
    } else {
        printf ( "El segundo es mayor que el cuadrado del primero.\n" );
    }
    return 0;
}

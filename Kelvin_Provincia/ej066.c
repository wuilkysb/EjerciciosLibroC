/*
 * =============================================================================
 *
 *       Filename:  ej066.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/10/13 14:55:34
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
    int n, c, mayor;
    do {
        printf ( "Número: " ); scanf ( "%d", &n );
        c++;
        if (n > mayor) {
            mayor = n;
        }
    } while(n >= 0);
    printf ( "El número mayor es %d de %d números\n", mayor, c );
    return 0;
}

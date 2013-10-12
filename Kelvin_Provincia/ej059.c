/*
 * =============================================================================
 *
 *       Filename:  ej059.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/10/13 11:06:14
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
    int anyo;
    printf ( "Dame un año: " ); scanf ( "%d", &anyo );
    if (0 == anyo % 4 && (0 != anyo % 100 || 0 == anyo % 400)) {
        printf ( "El año, %d, es bisiesto.\n", anyo);
    } else {
        printf ( "El año, %d, no es bisiesto.\n", anyo );
    }
    return 0;
}

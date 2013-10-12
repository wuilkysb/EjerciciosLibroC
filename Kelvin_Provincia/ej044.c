/*
 * =============================================================================
 *
 *       Filename:  ej044.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/10/13 14:02:28
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

enum { saludar='1', salir };

int main(void){
    char op;
    do {
        printf ( "1. Saludar\n2. Salir\nDame una opción: " );
        scanf ( "%s", &op );
        if ('1' == op) {
            printf ( "Hola\n" );
        }
    } while(op != salir);
    return 0;
}

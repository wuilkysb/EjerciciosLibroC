/*
 * =============================================================================
 *
 *       Filename:  ej065.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/10/13 14:50:51
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
    do {
        printf ( "Número: " ); scanf ( "%d", &n );
        printf ( "%d\n", n );
    } while(n >= 0);
    printf ( "Adios.\n" );
    return 0;
}

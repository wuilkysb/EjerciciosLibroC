/*
 * =============================================================================
 *
 *       Filename:  ej043.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/10/13 12:38:47
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
     if ((n / 2) % 2 != 0) {
         printf ( "%d es el doble de %d, que es impar.\n", n, n / 2 );
     }
     return 0;
 }

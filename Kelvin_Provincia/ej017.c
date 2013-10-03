/*
 * =============================================================================
 *
 *       Filename:  ej017.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  29/09/13 10:20:34
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
    char i;
    printf ( "+---------+----------+\n" );
    printf ( "| Decimal | Caracter |\n" );
    printf ( "+---------+----------+\n" );
    for (i = 32; i <= 126; i++)
        printf ( "|%9hhd|%10c|\n", i, i );
    printf ( "+---------+----------+\n" );
    return 0;
}

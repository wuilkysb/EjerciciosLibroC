/*
 * =============================================================================
 *
 *       Filename:  ej019.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/10/13 18:13:46
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
    int a = 0, b = 1, c = 2;
    a = b++ - c--;
    printf ( "1 a=%d, b=%d, c=%d\n", a, b, c );
    a += --b;
    printf ( "2 a=%d, b=%d, c=%d\n", a, b, c );
    c *= a + b;
    printf ( "3 a=%d, b=%d, c=%d\n", a, b, c );
    a = b | c;
    printf ( "4 a=%d, b=%d, c=%d\n", a, b, c );
    b = (a > 0) ? ++a : ++c;
    printf ( "5 a=%d, b=%d, c=%d\n", a, b, c );
    b <<= a = 2;
    printf ( "6 a=%d, b=%d, c=%d\n", a, b, c );
    c >>= a == 2;
    printf ( "7 a=%d, b=%d, c=%d\n", a, b, c );
    a += a = b + c;
    printf ( "8 a=%d, b=%d, c=%d\n", a, b, c );

    return 0;
}

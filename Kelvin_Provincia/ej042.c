/*
 * =============================================================================
 *
 *       Filename:  ej042.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/10/13 12:13:10
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>
#include <math.h>

int main(void){
    int n1, n2, n3, n4, n5, n;
    printf ( "Dame 5 números enteros separados por un espacio: " );
    scanf ( "%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5 );
    n = fabs(n1 - n2);
    n = (n <= fabs(n1 - n3)) ? n : fabs(n1 - n3);
    n = (n <= fabs(n1 - n4)) ? n : fabs(n1 - n4);
    n = (n <= fabs(n1 - n5)) ? n : fabs(n1 - n5);
    printf ( "El número mas cercano al %d es el %d.\n", n1, n );
    return 0;
}

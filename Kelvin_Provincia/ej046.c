/*
 * =============================================================================
 *
 *       Filename:  ej046.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/10/13 14:53:43
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
    int x = 8, n = 3, i, t = 1;
    for (i = 0; i < n; ++i) {
        t *= x;
    }
    printf ( "%d**%d = %d\n", x, n, t );
    return 0;
}

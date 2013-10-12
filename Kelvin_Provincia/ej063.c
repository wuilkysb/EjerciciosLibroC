/*
 * =============================================================================
 *
 *       Filename:  ej063.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/10/13 13:24:27
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
    int a, b, c, o = 2, mcd = 1, i, j, m;
    char p;
    printf ( "Dame un número: " ); scanf ( "%d", &a );
    printf ( "Dame otro número: " ); scanf ( "%d", &b );
    while(1 < a && 1 < b) {
        c = 0;
        if (0 == a % o) {
            a /= o;
            c++;
        }
        if (0 == b % o) {
            b /= o;
            c++;
        }
        if (2 == c) {
            mcd *= o;
        }
        if (0 == c) {
            m = (a > b) ? a : b;
            for (i = o + 1; i <= m; i ++) {
                p = 1;
                for (j = 2; j < i; j++) {
                    if (0 == i % j) {
                        p = 0; break;
                    }
                }
                if (1 == p) {
                    o = i; break;
                }
            }
        }
    }
    printf ( "El MCD es %d\n", mcd );
    return 0;
}

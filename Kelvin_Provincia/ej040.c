/*
 * =============================================================================
 *
 *       Filename:  ej040.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/10/13 10:54:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

enum { B500=500, B200=200, B100=100, B50=50, B20=20, B10=10, B5=5 };
enum { M1=1, M2 };

int main(void){
    int euros, des;
    printf ( "Dame los euros: " ); scanf ( "%d", &euros );

    if (euros >= B500) {
        des = euros / B500;
        if (des == 1) printf ( "1 billete de %d euros.\n", B500 );
        else printf ( "%d billetes de %d euros.\n", des, B500 );
        euros %= B500;
    }
    if (euros >= B200) {
        des = euros / B200;
        if (des == 1) printf ( "1 billete de %d euros.\n", B200 );
        else printf ( "%d billetes de %d euros.\n", des, B200 );
        euros %= B200;
    }
    if (euros >= B100) {
        des = euros / B100;
        if (des == 1) printf ( "1 billete de %d euros.\n", B100 );
        else printf ( "%d billetes de %d euros.\n", des, B100 );
        euros %= B100;
    }
    if (euros >= B50) {
        des = euros / B50;
        if (des == 1) printf ( "1 billete de %d euros.\n", B50 );
        else printf ( "%d billetes de %d euros.\n", des, B50 );
        euros %= B50;
    }
    if (euros >= B20) {
        des = euros / B20;
        if (des == 1) printf ( "1 billete de %d euros.\n", B20 );
        else printf ( "%d billetes de %d euros.\n", des, B20 );
        euros %= B20;
    }
    if (euros >= B10) {
        des = euros / B10;
        if (des == 1) printf ( "1 billete de %d euros.\n", B10 );
        else printf ( "%d billetes de %d euros.\n", des, B10 );
        euros %= B10;
    }
    if (euros >= B5) {
        des = euros / B5;
        if (des == 1) printf ( "1 billete de %d euros.\n", B5 );
        else printf ( "%d billetes de %d euros.\n", des, B5 );
        euros %= B5;
    }
    if (euros >= M2) {
        des = euros / M2;
        if (des == 1) printf ( "1 moneda de %d euros.\n", M2 );
        else printf ( "%d monedas de %d euros.\n", des, M2 );
        euros %= M2;
    }
    if (euros >= M1) {
        des = euros / M1;
        if (des == 1) printf ( "1 moneda de %d euros.\n", M1 );
        else printf ( "%d monedas de %d euros.\n", des, M1 );
        euros %= M1;
    }
    return 0;
}

/*
 * =====================================================================================
 *
 *       Filename:  ej006.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  22/09/13 11:34:25
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

int main(void){
    float x = 1.0;

    while (x < 10.0){
        printf("%f \t %f \n", x, log(x));
        x = x + 1.0;
    }
    return 0;
}


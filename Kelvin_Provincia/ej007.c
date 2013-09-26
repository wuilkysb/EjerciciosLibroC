/*
 * =====================================================================================
 *
 *       Filename:  ej007.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  22/09/13 11:41:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(void){
    int i, n = 1;

    while (n < 6){
        i = 1;
        while (i < 6){
            printf("%d \t", n*i);
            i++;
        }
        printf("\n");
        n++;
    }

    return 0;
}

/*
 * =====================================================================================
 *
 *       Filename:  ej007.c
 *
 *    Description:         
 *
 *        Version:  1.0
 *        Created:  09/10/13 21:40:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alejandro Riera
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main() {
    
    int n=1;
    int i;
    while (n < 6) {
        i=1;
        while (i < 6){
           printf("%d \t",n*i);
           i++;
        }
        printf("\n");
        n++;
    
}
    return 0;
}

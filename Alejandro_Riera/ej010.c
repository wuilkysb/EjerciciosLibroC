/*
 * =====================================================================================
 *
 *       Filename:  ej010.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/10/13 00:50:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alejandro Riera(), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void) {

    int a,b;
   
    scanf("%d", &a);
    scanf("%d", &b);

    while(a > b) {
        scanf("%d", &a);
        scanf("%d", &b);
    }

printf("%d %d\n", a,b);

return 0;

}

/*
 * =====================================================================================
 *
 *       Filename:  ej006.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/10/13 21:20:33
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alejandro Riera (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>

int main() {
    float r=1.0;
    while(r < 10.0) {
        printf("%f\t %f\n",r,log(r));
        r = r+1.0;
    }
    return 0;
}

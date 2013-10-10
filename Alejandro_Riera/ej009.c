/*
 * =====================================================================================
 *
 *       Filename:  ej009.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/10/13 00:37:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alejandro Riera
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void) {
    int a,b;
    printf("Teclee un nº\n");
    scanf("%d",&a);
    printf("Tecle otro nº\n");
    scanf("%d",&b);

    while(a <=b){
        printf("Teclee un numero: \n");
        scanf("%d", &a);
        printf("Teclee otro numero: \n");
        scanf("%d", &b);
    }

printf("%d es mayor que %d\n",a,b);

return 0;
}


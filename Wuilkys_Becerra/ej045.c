#include <stdio.h>

int main(void){
    int n;

    printf("Dame un numero entero distinto de 1: ");
    scanf("%d", &n);

    printf("\n%d",n);
    do{
        if( 0 == n%2 )
               n /= 2;
        else{
            n *= 3;
            n++;
            }
       printf("\n%d",n);
    }while( n != 1 );

    return 0;
}

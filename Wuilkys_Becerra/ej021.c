#include <stdio.h>
#include <math.h>

int main(void){
    int x, result;

    printf("Dame un valor: "); scanf("%d",&x);

    result = pow( x, 4 ) - pow( x, 2) + 1;
    printf("El resultado es: %d", result);

    return(0);
}

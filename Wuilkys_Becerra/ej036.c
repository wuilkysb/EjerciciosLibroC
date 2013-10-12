#include <stdio.h>

int main(void){
    int num;
    float x;

    printf("Dame un numero entero: "); scanf("%d",&num);
    x = num / 2;

    if( x == 0)
        printf("El numero es par");
    else
        printf("El numero es impar");

    return 0;
}

#include <stdio.h>

int cuadrado(int a){
    int b;
    b = a*a;
    return b;
}

int main(void){
    int num;
    printf("Dame un numero : "); scanf("%d", &num);
    printf("El cuadrado es : %d", cuadrado(num));

    return 0;
}

#include <stdio.h>

float cuadrado(float a){
    float b;
    b = a*a;
    return b;
}

int main(void){
    float num;
    printf("Dame un numero : "); scanf("%f", &num);
    printf("El cuadrado es : %.3f", cuadrado(num));

    return 0;
}

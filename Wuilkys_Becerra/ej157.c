#include <stdio.h>

float potenciacion(float x,int n){
    float potencia;
    int i;

    potencia = 1;
    if(n > 0)
        for(i=0 ; i < n ; i++)
            potencia *= x;
    else
        for(i=0 ; i > n ; i--)
            potencia *= 1/x;

    return potencia;
}

int main(void){
    float base, resul;
    int expo;

    printf("Dame una base : "); scanf("%f" ,&base);
    printf("Dame el exponente : "); scanf("%d",&expo);

    resul = potenciacion(base, expo);
    printf("El resultado es : %.3f", resul);
    return 0;
}

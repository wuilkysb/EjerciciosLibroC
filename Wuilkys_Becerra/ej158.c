#include <stdio.h>
#include <math.h>

int factorial(int x){
    int i, fac;
    fac = 1;
    for(i=1 ; i <= x ; i++) fac *= i;
    return fac;
}

float potenciacion(float x,int n){
    float potencia;
    int i;
    potencia = 1;
        for(i=0 ; i < n ; i++)
            potencia *= x;
    return potencia;
}

float dTaylor(int x, int n){
    float taylor;
    int i;
    taylor = 1;
    for(i=0 ; i < n ; i++)
        if(i != 0)
            taylor += potenciacion(x,i) / factorial(i);
    return taylor;
}

int main(void){
    int x, n;

    printf("Dame un numero : "); scanf("%d",&x);
    printf("Dame el tamayo de la serie : "); scanf("%d",&n);
    printf("El aproximado es : %f", dTaylor(x,n));
    printf(" %f",exp(x));

    return 0;
}

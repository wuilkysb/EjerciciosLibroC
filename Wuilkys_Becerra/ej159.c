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

float coseno(int x, int n){
    float cose;
    int i, i_ant = 0;
    cose = 1;
    for(i=1 ; i <= n ; i++){
        if(i%2 == 0){
            cose += potenciacion(x,i) / factorial(i);
        } else cose += potenciacion(x,i) / factorial(i) * -1;
    }
    return cose;
}

int main(void){
    int x, n;

    printf("Dame un numero : "); scanf("%d",&x);
    printf("Dame el tamayo de la serie : "); scanf("%d",&n);
    printf("El coseno de %d es aproximadamente : %f",x, coseno(x,n));
    printf("\n%f",cos(x));

    return 0;
}

#include <stdio.h>
#include <math.h>

float senh(int x){
    float sh;
    sh = (exp(x) - exp(-x)) / 2;
    return sh;
}

int main(void){
    int n;
    printf("Dame un numero : "); scanf("%d",&n);
    printf("El seno hiperbolico de %d es %.3f",n,senh(n));

    return 0;
}

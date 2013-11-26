#include <stdio.h>
#include <math.h>

float Distancia(int x, int y, int a, int b, int c){
    float d;
    d = (a*x + b*y + c) / sqrt(pow(a,2) + pow(b,2));
    return d;
}

int main(void){
    int x, y, a, b, c;

    printf("Dame las coordenadas del punto en x : "); scanf("%d", &x);
    printf("Dame las coordenadas del punto en y : "); scanf("%d", &y);
    printf("Dame los coeficientes de la recta separados por coma(,): "); scanf("%d,%d,%d",&a,&b,&c);

    printf("La distancia entre el punto y la recta es : %.3f", Distancia(x,y,a,b,c));

    return 0;
}

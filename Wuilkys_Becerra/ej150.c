#include <stdio.h>
#include <math.h>

float volumenEsfera(float r){
    float vol;
    vol = 4/3 * M_PI * pow(r,3);
    return vol;
}

int main(void){
    float radio;
    printf("Dame el radio de la Esfera : "); scanf("%f",&radio);
    printf("El volumen es : %.3f", volumenEsfera(radio));

    return 0;
}

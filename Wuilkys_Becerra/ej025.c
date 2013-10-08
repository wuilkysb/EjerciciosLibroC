#include <stdio.h>
#include <math.h>

int main(void){
    float radio, perim, area;

    printf("Ingresa el radio de un circulo: "); scanf("%f",&radio);

    perim = 2 * M_PI * radio;
    area  = M_PI * pow( radio, 2 );

    printf("\nEl perimetro es: %.3f\nY el area es: %.3f", perim, area);

    return 0;
}

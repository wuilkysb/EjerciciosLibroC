#include <stdio.h>
#include <math.h>

int main(void){
    float lon, perim, area;

    printf("ingresa una longitud del cuadrado: "); scanf("%f",&lon);

    perim = lon * 4;
    area   = pow( lon , 2 );

    printf("El pririmetro es: %.3f\nY el area: %.3f\n", perim, area);

    return (0);
}

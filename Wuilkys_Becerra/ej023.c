#include <stdio.h>
#include <math.h>

int main(void){
    float lon1, lon2, perim, area;

    printf("Ingresa dos lados del rectangulo separados por un guion(-): ");
    scanf("%f-%f",&lon1,&lon2);

    perim = lon1 * 2 + lon2 * 2;
    area  = lon1 * lon2;

    printf("\nEl primetro es: %.3f, Y el area: %.3f\n\n", perim, area);

    return 0;
}

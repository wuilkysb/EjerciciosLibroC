#include <stdio.h>
#include <math.h>

int main(void){
    float r, area, perim;

    printf("Ingresa el radio: "); scanf("%f",&r);

    area  = M_PI * pow( r , 2 );
    perim = 2 * M_PI * r;

    printf("El area es: %.3f \nEl perimetro es: %.3f", area, perim);

    return 0;
}

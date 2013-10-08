#include <stdio.h>
#include <math.h>

int main(void){
    float a, b, c, s, perim;
    printf("Ingresa primer lado del triangulo: ");  scanf("%f",&a);
    printf("Ingresa segundo lado del triangulo: "); scanf("%f",&b);
    printf("Ingresa tercer lado del triangulo: ");  scanf("%f",&c);

    s = (a+b+c)/2;
    perim = sqrt(s*(s - a)*(s - b)*(s - c));

    printf("\nEl perimetro es: %.3f\n", perim);

    return 0;

}

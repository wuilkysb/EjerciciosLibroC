#include <stdio.h>

int main(void){
    float a, b;

    printf("Dame el valor para a: "); scanf("%f",&a);
    printf("Dame el valor para b: "); scanf("%f",&b);

    if(b == 0)
        printf("\nError de division por cero. No existe solucion");
    else
        printf("\nLa ecuacion tiene infinitas soluciones");

    return 0;
}

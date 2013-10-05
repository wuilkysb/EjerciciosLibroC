#include <stdio.h>

int main(void){
    float a, b, x;
    
    printf("Valor de a: ");
    scanf("%f",&a);
    printf("Valor de b: ");
    scanf("%f",&b);
    
    if( a!= 0 ){
        x = -b/a;
        printf("solucion: %f", x);
    }else if( b!=0 ) printf("la ecuacion nbo tiene solucion");
    else printf("la ecuacion tiene infinitas soluciones");
    
    getch();
    return(0);
}

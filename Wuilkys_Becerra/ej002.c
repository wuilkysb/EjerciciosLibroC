#include <stdio.h>

int main(void){
    float a, b, maximo;
    printf("Dame el primer numero: ");
    scanf("%f",&a);
    printf("Dame el segundo numero: ");
    scanf("%f",&b);
    
    if( a>=b ) maximo = a;
    else maximo = b;
    
    printf("El maximo es: %f",maximo);
    getch();
return (0);
}

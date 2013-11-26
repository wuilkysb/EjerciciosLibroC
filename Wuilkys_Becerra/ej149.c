#include <stdio.h>

int menor(float a, float b){
    if(a < b)
        return 1;
    else return 0;
}

int main(void){
    float num1, num2;
    printf("Dame un numero : "); scanf("%f", &num1);
    printf("Dame otro numero : "); scanf("%f", &num2);

    if(menor(num1,num2) == 1) printf("El primero es menor que el segundo");
    else printf("El primero es mayor que el segundo");

    return 0;
}

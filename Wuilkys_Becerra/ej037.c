#include <stdio.h>
#include <math.h>

int main(void){
    int prim, segund;

    printf("Ingresa valor del primer numero: ");  scanf("%d",&prim);
    printf("Ingresa valor del segundo numero: "); scanf("%d",&segund);

    if ( prim == segund*segund){
        printf("\nEl segundo es el cuadrado exacto del primero");
    }else if(segund < pow(prim , 2)){
        printf("\nEl segundo es menor que el cuadrado del primero");
    }else if(segund > pow(prim , 2)){
        printf("\nEl segundo es mayor que el cuadrado del primero");
    }

    return 0;

}

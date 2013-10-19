#include <stdio.h>
#define TALLA 10
int main(void){
    int v[TALLA], i, p;
    i=0;
    p=1;
    do{
        printf("Ingresa un entero positivo en la posicion %d:  ", i); scanf("%d", &p);
        if(p >= 0){
            v[i] = p;
            i++;
        }else printf("\nTiene que ser positivo\n\n");
    }while(i < TALLA);
    printf("\n");
    do{
        printf("Ingresa un numero (negativo salir): "); scanf("%d", &p);

        for(i=0 ; i < TALLA ; i++){
            if(v[i] == p){
                printf("\nEl numero se encuentra en el vector\n\n");
                break;
            }
        }

    }while(p >= 0 );

    return 0;
}


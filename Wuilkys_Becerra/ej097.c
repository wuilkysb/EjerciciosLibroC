#include <stdio.h>
#define TALLA 10
int main(void){
    int v[TALLA], i, j, p;
    int aux, centro, inf, sup;

    i=0;
    p=1;
    do{
        printf("Ingresa un entero positivo en la posicion %d:  ", i); scanf("%d", &p);
        if(p >= 0){
            v[i] = p;
            i++;
        }else printf("\nTiene que ser positivo\n\n");
    }while(i < TALLA);

    for(i=0 ; i < TALLA ; i++){
        for(j=0 ; j < TALLA-1 ; j++){
            if(v[j] > v[j+1]){
                aux = v[j+1];
                v[j+1] = v[j];
                v[j] = aux;
            }
        }
    }
    for(i=0 ; i < TALLA ; i++) printf("%d ", v[i]);
    do{
        inf = 0;
        sup = TALLA-1;
        printf("Ingresa un numero (negativo salir): "); scanf("%d", &p);

        while(inf <= sup){
            centro = (sup+inf)/2;
            if(v[centro] == p){
                printf("\nEl numero se encuentra en el vector\n\n");
                break;
            }else if( p < v[centro]){
                 sup = centro-1;
            }else if(p > v[centro]){
                 inf = centro+1;
            }
        }

    }while(p >= 0 );

    return 0;
}

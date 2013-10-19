#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TALLA 20

int main(void){
    int v[TALLA], i, n, n2, indice, contador;
    int aux[TALLA];

    srand(time(NULL));
    for(i=0 ; i < TALLA ; i++){
        v[i] = rand()%101;
        printf("%d ", v[i]);
    }
    for(i=0; i < TALLA ; i++) aux[i] = -1;
    printf("\n");

    n = 0;
    n2 = 0;
    for(i=0 ; i < TALLA-1 ; i++){
        if(v[i] < v[i+1] ){
            n++;
            aux[i] = v[i];
            aux[i+1] = v[i+1];
        }else n = 0;

        if(n2 < n+1){
            n2 = n+1;
            indice = i+1;
        }

    }

    printf("\nEl trama mas largo formado por numeros crecientes consecutivos es: %d\n", n2);
    n2-=1;
    for(i=indice-n2 ; i <= indice ; i++ ) printf(" %d ", aux[i]);



return 0;
}

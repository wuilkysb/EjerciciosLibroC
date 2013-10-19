#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TALLA 100

int main(void){
    int v[TALLA], i, n, n2;

    srand(time(NULL));
    for(i=0 ; i < TALLA ; i++){
        v[i] = rand()%5;
        printf("%d ", v[i]);
    }

    n = 0;
    n2 = 0;
    for(i=0 ; i < TALLA-1 ; i++){
        if(v[i] == v[i+1] ){
            n++;
        }else n = 0;
        if(n2 < n+1){
            n2 = n+1;
        }

    }

    printf("\nEl trama mas largo formado por numeros iguales es de %d", n2);



return 0;
}

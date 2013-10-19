#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TALLA 100

int main(void){
    int v[TALLA], j, i, var, var2, num;

    srand(time(NULL));
    for(i=0 ; i < TALLA ; i++){
        v[i] = rand()%11;
        printf("%d ", v[i]);
    }
    printf("\n");

    var2 = 0;
    num = 0;
    for(i=0 ; i < TALLA ; i++){
            var = 0;
            for(j=0 ; j < TALLA ; j++){
                if(v[i] == v[j])
                    var++;
        }
        if(var > var2){
            var2 = var;
            num = v[i];
        }
    }

    printf("\nEl numero %d tiene el mayor numero de repeticiones con %d veces\n", num, var2);

    return 0;
}

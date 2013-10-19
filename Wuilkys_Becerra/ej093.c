#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TALLA 100

int main(void){
    int v[TALLA], j, i, var;

    srand(time(NULL));
    for(i=0 ; i < TALLA ; i++){
        v[i] = rand()%1001;
    }

    for(i=0 ; i < TALLA ; i++){
            var = 0;
            for(j=0 ; j < TALLA ; j++){
                if(v[i] == v[j])
                    var++;
        }
        if(var > 1) printf("\nEl numero %d  aparece %d veces", v[i], var);
    }

return 0;
}

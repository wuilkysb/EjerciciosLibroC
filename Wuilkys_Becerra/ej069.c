#include <stdio.h>
#define tam 50

int main(void){
    int i, f=1, b=0;
    unsigned long long vec[tam], buscar;

    for(i=0 ; i < tam ; i++){
            vec[i] = 0;
    }
    i = 0;
    while(i < tam){
            if(i==0)
                vec[i] = 0;
            else{
                vec[i] = b + f;
                f = b;
                b = vec[i];
            }
        i++;
    }

    printf("Ingresa un numero a buscar: "); scanf("%llu", &buscar);

    for(i = 0; i < tam ; i++){
        if(vec[i] == buscar){
            printf("\nEs uno de los 50 primeros numeros de Fibonacci");
            i = 51;
        }
    }

    if (i < tam+1) printf("\nNo es uno de los 50 primeros numeros de Fibonacci");

 return 0;
}


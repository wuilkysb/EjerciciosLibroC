#include <stdio.h>
#define TAM 100

int main(void){
    int vec[TAM], i;

    for(i=0 ; i < TAM ; i++){
        if(i%2 == 0) vec[i] = 0;
        else vec[i] = 1;
    }

    for(i=0; i < TAM ; i++) printf("%d ", vec[i]);

 return 0;
}

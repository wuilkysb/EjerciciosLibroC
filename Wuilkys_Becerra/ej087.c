#include <stdio.h>
#define TALLA 10

int main(void){
    int numeros[TALLA];
    int i, j=0;
    do{
        printf("\nIngresa un numero en la pocicion %d: ", j); scanf("%d", &numeros[j]);
        for(i=0 ; i < j ; i++)
            if(numeros[j] == numeros[i]){
                printf("El numero ya esta registrado, ingresa uno diferente\n\n");
                j--;
            }
        j++;
    }while(j < TALLA);

    for(i=0 ; i < TALLA ; i++){
        printf("\n");
        printf("%d", numeros[i]);
    }

 return 0;
}

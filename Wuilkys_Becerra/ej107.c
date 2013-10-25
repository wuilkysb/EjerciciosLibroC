#include <stdio.h>
#include <string.h>
#define MAXLON 80


int main(void){
    char p[MAXLON+1], q[MAXLON+1];
    int i, j, k, cad, cad2, cont, indice;

     printf("Introduce una cadena:  "); gets(p);
     printf("Introduce otra cadena:  "); gets(q);
     cad = strlen(p);
     cad2 = strlen(q);

    indice = 0;
    for(i=0 ; i < cad2 ; i++){
        k = i;
        cont = 0;
        for(j=0 ; j < cad ; j++){
            if(p[j] == q[k]){
                cont ++;
                k++;

                if(cont == cad2){
                    indice = j+1 - cont;
                    break;
                }
            }
        }
    }

    if(cont > 0) printf(" %d ", indice);
    else printf("No esta contenida ");

    return 0;
}

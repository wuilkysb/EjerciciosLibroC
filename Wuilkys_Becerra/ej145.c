#include <stdio.h>
#include <string.h>
#define MAXLON 1000

struct Cifras{
    char num[MAXLON+1];
    int longitud;
};

int main(void){
    struct Cifras n1, n2;
    char com[10][2]={ "0" , "1" , "2" , "3" , "4" , "5" , "6" , "7" , "8" , "9" };
    int suma[MAXLON], resta[MAXLON];
    int i, j, ban;

    printf("Dame un numero   : "); gets(n1.num);
    n1.longitud = strlen(n1.num);
    printf("Dame otro numero : "); gets(n2.num);
    n2.longitud = strlen(n2.num);

    for(i=0 ; i < MAXLON ; i++){
        suma[i]  = 0;
        resta[i] = 0;
    }
    for(i=0 ; i < n1.longitud ; i++){
        for(j=0 ; j < 10 ; j++)
            if(n1.num[i] == com[j][0]){
                suma[i]  = j;
                resta[i] = j;
            }
    }

    //calcular suma
    for(i=n2.longitud ; i >= 0 ; i--)
        for(j=0 ; j < 10 ; j++){
            if(n2.num[i] == com[j][0]){
                if(suma[i] + j >= 10 && i > 0){
                    suma[i] = (suma[i]+j) % 10;
                    suma[i-1] += 1;
                }else suma[i] += j;
            }
        }

    //calcular resta
    for(i=n2.longitud ; i >= 0 ; i--)
        for(j=0 ; j < 10 ; j++){
            if(n2.num[i] == com[j][0]){
                resta[i] -= j;
            }
        }

    //presentacion de los resultados
    for(i=0 ; i < strlen(suma)+1 ; i++)
        printf("%d" , suma[i]);
    printf("\n");

    for(i=0 ; i < strlen(resta)+1 ; i++)
        printf("%d" , abs(resta[i]));

    return 0;
}

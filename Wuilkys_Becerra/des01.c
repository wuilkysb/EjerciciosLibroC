#include <stdio.h>

int main(void){
    int num, i, suma=0, mod;

    printf("Dame un numero: "); scanf("%d", &num);

    for(i=1 ; i < num ; i++)
        if(num%i == 0) suma += i;



    if(suma == num) printf("Es un numero perfecto");
    else printf("No es un numero perfecto");

 return 0;
}

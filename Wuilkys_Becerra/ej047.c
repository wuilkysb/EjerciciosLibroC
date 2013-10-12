#include <stdio.h>
#include <math.h>

int main(void){
    int num, res, mod, decimal=0, i;
    char c;

    printf("Ingresa un valor binario "); scanf("%d", &num);
       for( i=0 ; res != 0 ; i++ ){
        res = num/10;
        mod = num%10;
        num = res;
        decimal += mod * pow(2, i);
            if(mod != 0 && mod != 1){
                    printf("\n\nNo se puede proporcionar el valor, no es un numero binario");
                    c = 'f';
            }
        }

        if( c != 'f'){
           printf("\n\nel valor decimal es: %d",decimal);
        }


    return 0;


}

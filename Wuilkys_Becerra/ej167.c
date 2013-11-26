#include <stdio.h>
#define MAX 12
#define MAXLON 80

void letras(int n){
    char unidades[10][MAX]  = { "uno" , "dos" , "tres" , "cuatro" , "cinco" ,
                              "seis" , "siete" , "ocho" , "nueve"
                            };

    char diez[11][MAX]    = { "diez" , "once" , "doce" , "trece" , "catorce" , "quince" ,
                                "sieciseis" , "diecisiete" , "dieciocho" , "diecinueve"
                            };

    char decena[10][MAX] = { "veinte" , "treinta" , "cuarenta" , "cincuenta" , "sesenta" ,
                                "setenta" , "ochenta" , "noventa"
                            };

    char centenas[10][MAX] = { "ciento" , "docientos" , "trecientos" , "cuatrocientos" , "quinientos" ,
                                "seiscientos", "setecientos" , "ochocientos" , "novecientos"
                            };

    char cambio[MAXLON+1];
    sprintf(cambio, "%s", "");
    int j;
    if(n >= 100 && n < 1000){
        sprintf(cambio , "%s%s " , cambio , centenas[n/100-1]);
        n %= 100;
        j = 1;
    }
    if(n >= 20 && n < 100){
        sprintf(cambio , "%s%s" , cambio, decena[n/10-2]);
        j = 1;
        n %= 10;
    }
    if(n >= 10 && n < 20){
        sprintf(cambio , "%s%s" , cambio, diez[n-10]);
    }
    if(n > 0 && n < 10){
        if(j == 1) sprintf(cambio , "%s y " , cambio);
        sprintf(cambio , "%s%s" , cambio, unidades[n-1]);
    }
    printf("%s",cambio);
}

int main(void){
    int num;
    printf("Dame un numero : "); scanf("%d",&num);
    letras(num);

    return 0;
}

/*
 * =====================================================================================
 *
 *       Filename:  ej008.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/10/13 23:17:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alejandro Riera  (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>

int main() {
    int opcion=0;
    float area,radio,perimetro,diametro;
    while(opcion != 4) {
     printf("----------------------------\n");
     printf("|Escoge una opcion.        |\n");
     printf("----------------------------\n");
     printf("|1) Calcular el diametro...|\n");
     printf("|2) Calcular el perimietro.|\n");
     printf("|3) Calcular el Area.......|\n");
     printf("|4) Salir                  |\n");
     printf("----------------------------\n");

     printf("Teclea 1,2,3,o 4 y pulsa el retorno de carro: \n");
     scanf("%d",&opcion);

     printf("Dame el radio de un Circulo: \n");
     scanf("%g",&radio);

     if(opcion==1){
        diametro= 2*radio;
        printf("El diametro es de %g\n",diametro);
    }
    
    else if(opcion==2){
        perimetro= 2* M_PI *radio;
        printf("El perimetro es %g\n", perimetro);
    }
    else if(opcion==3){
        area= M_PI * pow(radio,2);
        printf("El Area es %g\n", area);
   } 
    else if(opcion < 0 || opcion > 4){
        printf("Debes teclear un numero entre 1 y 4. Tu has tecleado %d\n",opcion);

    }
    
}
return 0;
}

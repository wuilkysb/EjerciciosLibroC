#include <stdio.h>
#include <math.h>

int main(){
    int opcion = 0 ;
    float radio, diametro, perimetro, area;
    while (opcion != 4){
          printf("\n\nEscaoja una opcion: \n\n");
          printf("1) Calcular diametro.\n");
          printf("2) Calcular perimetro.\n");
          printf("3) Calcular area.\n");
          printf("4) Salir.\n");
          printf("Teclea 1, 2, 3 o 4 y pulsa retorno de carro: ");
          scanf("%d",&opcion);
          
          printf("\nDame el radio de un circulo: ");
          scanf("%f",&radio);
          
          if(opcion == 1){
                    diametro = 2*radio;
                    printf("\nEl diametro es: %f",diametro);
          }else if(opcion == 2){
                   perimetro = 2 * M_PI * radio;
                   printf("\nEl area es: %f", perimetro);
          }else if(opcion == 3){
                area = M_PI * pow(radio,2);
                printf("\nEl area es: %f",area);
          }else if(opcion < 0 || opcion > 4){
          printf("Solo hay cuatro opciones: 1, 2, 3 o 4. Tu has tecleado %d\n",opcion);}
                  
    }
    getch();
    return(0);  
}

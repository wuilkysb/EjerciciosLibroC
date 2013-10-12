#include <stdio.h>
#include <math.h>

int main(void){
    float radio, perimetro, diametro, area;
    char opcion;

    printf("Dame el radio de un circulo: "); scanf("%f%c", &radio);
    opcion = ' ';

    while(opcion != 'a' && opcion != 'b' && opcion != 'c'){
        printf("Escoge una opcion\n");
        printf("a) calcular el diametro\n");
        printf("b) calcula el perimetro\n");
        printf("c) calcula el area\n");
        scanf("%c", &opcion);

        if(opcion == 'a'){
            diametro = 2* radio;
            printf("El diametro es: %.3f", diametro);
        }else if(opcion == 'b'){
            perimetro = 2 * M_PI * radio;
            printf("El perimetro es: %.3f", perimetro);
        }else if(opcion == 'c'){
            area = M_PI * pow(radio, 2);
            printf("El area es: %.3f", area);
        }else
            printf("Solo hay tres opciones, 'a', 'b' o 'c'. Tu has tecleado: %c", opcion);

    }
    return 0;
}

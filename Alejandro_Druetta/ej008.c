#include <stdio.h>
#include <math.h>

int main(void)
{
    int opcion=0;
    float radio, diametro, perimetro, area;

    while (opcion != 4){
        printf("Escoge una opción:\n");
        printf("1) Calcular el diámetro.\n");
        printf("2) Calcular el perímetro.\n");
        printf("3) Calcular el área.\n");
        printf("4) Salir.\n");
        printf("Teclea 1, 2, 3 o 4 y pulsa el retorno de carro: ");
        scanf("%d", &opcion);

        printf("Dame el radio de un círculo: ");
        scanf("%f", &radio);

        if (opcion == 1){
            diametro = 2 * radio;
            printf("El diámetro es %f.\n", diametro);
        }
        else if (opcion == 2){
            perimetro = 2 * M_PI * radio;
            printf("El perímetro es %f\n", perimetro);
        }
        else if (opcion == 3){
            area = M_PI * pow(radio, 2);
            printf("El área es %f\n", area);
        }
        else if (opcion < 0 || opcion > 4){
            printf("Sólo hay cuatro opciones: 1, 2, 3 y 4. Tú has tecleado %d\n", opcion);
        }
    }

    return 0;
}

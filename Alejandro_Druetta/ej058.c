#include <stdio.h>
#include <math.h>

int main(void)
{
    float radio, diametro, perimetro, area;
    char opcion;

    do {
        printf("Dame el radio de un círculo: ");
        scanf("%f", &radio);

        printf("\nEscoge una opción: \n");
        printf("a) Calcular el diámetro\n");
        printf("b) Calcular el perímetro\n");
        printf("c) Calcular el área\n");
        printf("Teclea a, b o c y pulsa el retorno de carro: ");
        scanf("%s", &opcion);

        switch (opcion) {
            case 'a':
                diametro = 2 * radio;
                printf("\nEl diámetro es %f\n", diametro);
                break;
            case 'b':
                perimetro = 2 * M_PI * radio;
                printf("\nEl perímetro es %f\n", perimetro);
                break;
            case 'c':
                area = M_PI * pow(radio, 2);
                printf("\nEl área es %f\n", area);
                break;
            default:
                printf("Sólo hay tres opciones: a, b o c. Tú has tecleado %c\n", opcion);
                break;
        }
    } while (opcion != 'a' && opcion != 'b' && opcion != 'c');

    return 0;
}

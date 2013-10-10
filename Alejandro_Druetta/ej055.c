#include <stdio.h>
#include <math.h>

enum {Vector1 = 1, Vector2, Suma, Diferencia, ProductoV, ProductoE, Angulo, Longitud, Finalizar};

int main(void)
{
    int opcion;
    float x1=0, y1=0, z1=0, x2=0, y2=0, z2=0, x3, y3, z3, r;

    do {
        printf("\n1) Introducir el primer vector\n");
        printf("2) Introducir el segundo vector\n");
        printf("3) Calcular la suma\n");
        printf("4) Calcular la diferencia\n");
        printf("5) Calcular el producto vectorial\n");
        printf("6) Calcular el producto escalar\n");
        printf("7) Calcular el ángulo (en grados) entre ellos\n");
        printf("8) Calcular la longitud\n");
        printf("9) Finalizar\n");

        printf("\nEscoja una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case Vector1:
                printf("\nIngrese el primer vector separando las coordenadas con comas.\n");
                printf("x1, y1, z1: ");
                scanf("%f, %f, %f", &x1, &y1, &z1);
                break;
            case Vector2:
                printf("\nIngrese el segundo vector separando las coordenadas con comas.\n");
                printf("x2, y2, z2: ");
                scanf("%f, %f, %f", &x2, &y2, &z2);
            case Suma:
                x3 = x1 + x2;
                y3 = y1 + y2;
                z3 = z1 + z2;
                printf("\nVector 1 = (%.1f, %.1f, %.1f)\n", x1, y1, z1);
                printf("Vector 2 = (%.1f, %.1f, %.1f)\n", x2, y2, z2);
                printf("Suma     = (%.1f, %.1f, %.1f)\n", x3, y3, z3);
                break;
            case Diferencia:
                printf("\n1) Primer vector menos segundo vector\n");
                printf("2) Segundo vector menos primer vector\n");
                printf("\nEscoja una opción: ");
                scanf("%d", &opcion);
                switch (opcion) {
                    case 1:
                        x3 = x1 - x2;
                        y3 = y1 - y2;
                        z3 = z1 - z2;
                        printf("\nVector 1   = (%.1f, %.1f, %.1f)\n", x1, y1, z1);
                        printf("Vector 2   = (%.1f, %.1f, %.1f)\n", x2, y2, z2);
                        printf("Diferencia = (%.1f, %.1f, %.1f)\n", x3, y3, z3);
                        break;
                    case 2:
                        x3 = x2 - x1;
                        y3 = y2 - y1;
                        z3 = z2 - z1;
                        printf("\nVector 1   = (%.1f, %.1f, %.1f)\n", x1, y1, z1);
                        printf("Vector 2   = (%.1f, %.1f, %.1f)\n", x2, y2, z2);
                        printf("Diferencia = (%.1f, %.1f, %.1f)\n", x3, y3, z3);
                        break;
                }
                break;
            case ProductoV:
                x3 = y1 * z2 - z1 * y2;
                y3 = z1 * x2 - x1 * z2;
                z3 = x1 * y2 - y1 * x2;
                printf("\nVector 1 = (%.1f, %.1f, %.1f)\n", x1, y1, z1);
                printf("Vector 2 = (%.1f, %.1f, %.1f)\n", x2, y2, z2);
                printf("Producto = (%.1f, %.1f, %.1f)\n", x3, y3, z3);
                break;
            case ProductoE:
                r = x1 * x2 + y1 * y2 + z1 * z2;
                printf("\nVector 1 = (%.1f, %.1f, %.1f)\n", x1, y1, z1);
                printf("Vector 2 = (%.1f, %.1f, %.1f)\n", x2, y2, z2);
                printf("Producto = %.2f\n", r);
                break;
            case Angulo:
                break;
            case Longitud:
                printf("\n1) Primer vector\n");
                printf("2) Segundo vector\n");
                printf("\nEscoja una opción: ");
                scanf("%d", &opcion);
                switch (opcion) {
                    case 1:
                        r = sqrt(pow(x1, 2) + pow(y1, 2) + pow(z1, 2));
                        printf("\nVector 1 = (%.1f, %.1f, %.1f)\n", x1, y1, z1);
                        break;
                    case 2:
                        r = sqrt(pow(x2, 2) + pow(y2, 2) + pow(z2, 2));
                        printf("\nVector 2 = (%.1f, %.1f, %.1f)\n", x2, y2, z2);
                        break;
                }
                printf("Longitud = %.2f\n", r);
                break;
            case Finalizar:
                break;
            default:
                printf("\n%d no es una opción válida. Intente nuevamente.\n", opcion);
                break;
        }
    } while (opcion != 9);

    return 0;
}

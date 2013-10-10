#include <stdio.h>

enum {Saludar=1, Salir};

int main(void)
{
    int opcion;

    do {
        printf("1) Saluda\n");
        printf("2) Salir\n");
        printf("Dame una opción: ");
        scanf("%d", &opcion);

        if (opcion == Saludar)
            printf("Hola!\n");
    } while (opcion != Salir);

    return 0;
}

#include <stdio.h>

enum {Saludar=1, Salir};

int main() {

    int opcion;

    do {
        printf("1-Saludar\n");
        printf("2-Salir\n");
        printf("Elige una opcion\n");
        scanf("%d",&opcion);
    
        if(opcion==Saludar)
        
            printf("Hola\n");

    } while (opcion!=Salir);

return 0;

}

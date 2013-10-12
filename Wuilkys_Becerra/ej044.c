#include <stdio.h>

int main(void){
    int op;
    do{
        printf("1) Saludar \n");
        printf("2) Salir \n");
        scanf("%d", &op);

        switch(op){
            case 1:
                printf("Hola\n\n");
                break;
            case 2:
                printf("Adios\n\n");
                break;
            default:
                printf("Opcion no valida\n\n");
        }
    }while(op != 2);

    return 0;
}

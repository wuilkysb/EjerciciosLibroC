#include <stdio.h>
#include <string.h>
#define MAXNUM 20
#define MAXNOM 20
#define MAXAGEN 1000
#define MAXLINEA 80

enum {NuevaEntrada=1 , BorrarEntrada , NuevoNumero , BorrarNumero , Busqueda , Salir};

struct Datos{
    char nombre[MAXNOM+1];
    char numero[MAXNUM][MAXNUM];
    int num;
};

struct Agenda{
    struct Datos datos[MAXAGEN];
    int contacto;
};

int main(void){
    struct Agenda agenda;
    int op, i, j, k;
    char linea[MAXLINEA];
    agenda.contacto = 0;

    do{
        printf("1) Nueva entrada\n");
        printf("2) Borrar entrada\n");
        printf("3) Nuevo Numero de Contacto\n");
        printf("4) Borrar Numero Existente\n");
        printf("5) Buscar Contacto\n");
        printf("6) Salir\n");
        gets(linea);
        sscanf(linea , "%d" , &op);

        switch(op){
            case NuevaEntrada :
                printf("\nIngrese Nombre de contacto: ");
                gets(agenda.datos[agenda.contacto].nombre);
                printf("\nCuantos numeros se ingresaran: ");
                gets(linea);
                sscanf(linea , "%d" , &agenda.datos[agenda.contacto].num);
                for(i=0 ; i < agenda.datos[agenda.contacto].num ; i++){
                    printf("\nIngresa el %d numero: ", i+1);
                    gets(agenda.datos[agenda.contacto].numero[i]);
                }
                agenda.contacto++;
                break;

            case BorrarEntrada :
                printf("\nContacto a Borrar : ");
                gets(linea);
                for(i=0 ; i < agenda.contacto ; i++)
                    if(strcmp(linea,agenda.datos[i].nombre) == 0)
                        break;
                if(i < agenda.contacto)
                    for(j=i+1 ; j < agenda.contacto ; j++)
                        agenda.datos[j-1] = agenda.datos[j];
                agenda.contacto--;
                break;

            case NuevoNumero :
                printf("\nContacto al que ingresara nuevo numero : ");
                gets(linea);
                for(i=0 ; i < agenda.contacto ; i++){
                    if(strcmp(linea, agenda.datos[i].nombre) == 0){
                        printf("\nNuevo numero del contacto %s :", agenda.datos[i].nombre);
                        agenda.datos[i].num++;
                        gets(agenda.datos[i].numero[agenda.datos[i].num-1]);
                        break;
                    }
                }
                if(i == agenda.contacto)
                    printf("\nContacto no encontrado");
                break;

            case BorrarNumero :
                printf("\nContacto al que borrara numero : ");
                gets(linea);
                for(i=0 ; i < agenda.contacto ; i++)
                    if(strcmp(linea , agenda.datos[i].nombre) == 0)
                        break;
                if(i < agenda.contacto){
                    printf("\nnumero que borrara : ");
                    gets(linea);
                    for(j=0 ; j < agenda.datos[i].num ; j++)
                        if(strcmp(linea , agenda.datos[i].numero[j]) == 0)
                            break;
                    for(j+=1 ; j < agenda.datos[i].num ; j++){
                        for(k=0 ; k < strlen(agenda.datos[i].numero[j]) ; k++)
                            agenda.datos[i].numero[j-1][k] = agenda.datos[i].numero[j][k];
                        agenda.datos[i].numero[j-1][k] = '\0';
                    }
                    agenda.datos[i].num--;
                }else printf("\nContacto no encontrado");
                break;

            case Busqueda :
                k=0;
                printf("\nContacto a Buscar : ");
                gets(linea);
                for(i=0 ; i < agenda.contacto ; i++){
                    for(j=0 ; j < strlen(linea) ; j++){
                        if(agenda.datos[i].nombre[j] == linea[j]) k++;
                    }
                    if(k == strlen(linea)){
                        printf("%s\n" , agenda.datos[i].nombre);
                        for(j=0 ; j < agenda.datos[i].num ; j++)
                            printf("%s\n", agenda.datos[i].numero[j]);
                    }
                    k=0;
                }
                break;

            default :
                if(op < 6)
                    printf("Opcion no valida");
                break;
        }
    }while(op != Salir);

    return 0;
}

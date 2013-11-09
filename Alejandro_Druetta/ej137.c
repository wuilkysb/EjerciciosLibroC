#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXLONTEXT 1000
#define MAXCANTPAL 500
#define MAXLONPAL 20

int main(void)
{
    char texto[MAXLONTEXT+1];
    char palabras[MAXCANTPAL][MAXLONPAL+1];
    char aux[MAXLONPAL+1];
    int indice, i, j, k, cant, caracter, lontexto, existe;

    /* Ingresar el texto */
    printf("\n");
    printf("Escriba algo (máx. %d caracteres): ", MAXLONTEXT); gets(texto);
    texto[MAXLONTEXT] = '\0';
    lontexto = strlen(texto);

    /* Descartar caracteres no alfabéticos al comienzo */
    indice = 0;
    while (!isalpha(texto[indice]) && indice < lontexto) indice++;

    /* Detectar palabras */
    cant = 0;
    while (indice < lontexto && cant < MAXCANTPAL) {
        caracter = 0;
        while (isalpha(texto[indice]) && indice < lontexto) {
            texto[indice] = tolower(texto[indice]); /* A minúsculas para 
                                                       ordenar alfabéticamente */
            palabras[cant][caracter++] = texto[indice++];
        }
        palabras[cant][caracter] = '\0';

        /* Detectar repetidas */
        existe = 0;
        if (cant > 0)
            for (i=0; i<cant; i++)
                if (!strcmp(palabras[cant], palabras[i])) {
                    existe = 1;
                    cant--;
                    break;
                }
        cant++;

        /* Descartar caracteres no alfanuméricos entre palabras y al final */
        while (!isalpha(texto[indice]) && indice<lontexto) indice++;
    }

    /* Ordenar palabras alfabéticamente */
    for (i=1; i<cant; i++)
        for (j=0; j<cant-i; j++)
            if (strcmp(palabras[j], palabras[j+1]) > 0) {
                strcpy(aux, palabras[j]);
                strcpy(palabras[j], palabras[j+1]);
                strcpy(palabras[j+1], aux);
            }

    /* Imprimir palabras */
    printf("\n%d palabras:\n", cant);
    printf("\n");

    for (k=0; k<cant; k++)
        printf("\t%s\n", palabras[k]);
    printf("\n");

	return 0;
}

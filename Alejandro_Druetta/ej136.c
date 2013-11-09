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
    int indice, i, cant, caracter, lontexto, existe;

    /* Ingresar el texto */
    printf("Escriba algo (máx. %d caracteres): ", MAXLONTEXT); gets(texto);
    texto[MAXLONTEXT] = '\0';
    lontexto = strlen(texto);

    /* Descartar caracteres no alfabéticos al comienzo */
    indice = 0;
    while (!isalpha(texto[indice]) && indice<lontexto) indice++;

    /* Detectar palabras */
    cant = 0;
    while (indice < lontexto && cant < MAXCANTPAL) {
        caracter = 0;
        while (isalpha(texto[indice]) && indice<lontexto)
            palabras[cant][caracter++] = texto[indice++];
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

    /* Imprimir palabras */
    for (i=0; i<cant; i++)
        printf("%s\n", palabras[i]);

	return 0;
}

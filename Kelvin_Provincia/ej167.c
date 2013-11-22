/*
 * =============================================================================
 *
 *       Filename:  ej167.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/11/13 11:49:23
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>

#define MAXLON 80
#define DECENAS     10
#define CENTENAS    100
#define MILLAR      1000 

char unidades[][15] = {"uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", 
                    "ocho", "nueve", "diez", "once", "doce", "trece", "catorce",
                    "quince", "dieciseis", "diecisiete", "dieciocho",
                    "diecinueve", "veinte"};
char decenas[][15] = {"veinti", "treinta", "cuarenta", "cincuenta", "sesenta",
                    "setenta", "ochenta", "noventa", "cien"};
char centenas[][15] = {"ciento", "doscientos", "trescientos", "cuatrocientos",
                    "quinientos", "seiscientos", "setecientos", "ochocientos",
                    "novecientos"};
char texto[MAXLON + 1];

int numeroaLetra(int n) {
    if (n <= 20) {
        sprintf(texto, "%s%s", texto, unidades[n - 1]);
    } else if (n <= CENTENAS) {
        sprintf(texto, "%s%s", texto, decenas[n / DECENAS - 2]);
        if (n % DECENAS && n / DECENAS != 2) {
            sprintf(texto, "%s %s ", texto, "y");
        }
        return n % DECENAS;
    } else if (n < MILLAR) {
        sprintf(texto, "%s%s ", texto, centenas[n / CENTENAS - 1]);
        return n % CENTENAS;
    }
    return 0;
}

void convertir(int n){
    if (!n) sprintf(texto, "%s", "cero");
    if (n < 0) {
        sprintf(texto, "%s", "menos ");
        n *= -1;
    }
    while(n > 0) {
        n = numeroaLetra(n);
    }
    printf ("%s\n", texto);
}

int main(void) {
    int numero;
    sprintf(texto, "%s", "");
    printf ("Dame un número: "); scanf ("%d", &numero);
    convertir(numero);
    return 0;
}

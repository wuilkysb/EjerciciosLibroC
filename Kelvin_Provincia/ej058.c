/*
 * =============================================================================
 *
 *       Filename:  ej058.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/10/13 10:49:51
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  KELVIN PROVINCIA (), aek6.io@gmail.com
 *   Organization:  aek6
 *
 * =============================================================================
 */
#include <stdio.h>
#include <math.h>

int main(void){
    float radio, diametro, perimetro, area;
    char opcion = ' ';
    printf ( "Dame el radio de un círculo: " ); scanf ( "%f", &radio );
    while(opcion != 'a' && opcion != 'b' && opcion != 'c') {
        printf ( "Escoge una opción: \n" );
        printf ( "a) Calcular el diámetro.\n" );
        printf ( "b) Calcular el perímetro.\n" );
        printf ( "c) Calcular el área.\n" );
        printf ( "Teclea a, b o c y pulsa el retorno de carro: \n" );
        scanf ( "%s", &opcion );
        if ('a' == opcion) {
            diametro = 2 * radio;
            printf ( "El diámetro es %f", diametro );
        } else if ('b' == opcion) {
            perimetro = 2 * M_PI * radio;
            printf ( "El Perímetro es %f", perimetro );
        } else if ('c' == opcion) {
            area = M_PI * pow(radio, 2);
            printf ( "El área es %f", area );
        } else {
            printf ( "Sólo hay tres opciones: a, b o c. Tú has tecleado %c", opcion );
        }
    }
    return 0;
}

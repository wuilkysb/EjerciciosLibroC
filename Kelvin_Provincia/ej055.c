/*
 * =============================================================================
 *
 *       Filename:  ej055.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/10/13 19:34:13
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
    char op;
    float x1, x2, y1, y2, z1, z2, x, y, z, rr, r1, r2;
    do {
        printf ( "\n1) Introducir el primer vector\n" );
        printf ( "2) Introducir el segundo vector\n" );
        printf ( "3) Calcular la suma\n" );
        printf ( "4) Calcular la diferencia\n" );
        printf ( "5) Calcular el producto vectorial\n" );
        printf ( "6) Calcular el producto escalar\n" );
        printf ( "7) Calcular el ángulo (en grados) entre ellos\n" );
        printf ( "8) Calcular la longitud\n" );
        printf ( "9) Finalizar\n" );
        scanf ( "%s", &op );
        switch (op){
            case '1':
                printf ( "Dame los valores x1, y1, z1, separados por un espacio: \n" );
                scanf ( "%f %f %f", &x1, &y1, &z1 );
                break;
            case '2':
                printf ( "Dame los valores x2, y2, z2, separados por un espacio: \n" );
                scanf ( "%f %f %f", &x2, &y2, &z2 );
                break;
            case '3':
                printf ( "La suma es: (%f, %f, %f)\n", x1 + x2, y1 + y2, z1 + z2 );
                break;
            case '4':
                do {
                    printf ( "1) Primer vector menos segundo vector\n" );
                    printf ( "2) Segundo vector menos primer vector\n" );
                    scanf ( "%s", &op );
                } while(!(op == '1' || op == '2'));
                if (op == '1') {
                    printf ( "Diferecnia: (%f, %f, %f) - (%f, %f, %f) = (%f, %f, %f)\n",
                            x1, y1, z1, x2, y2, z2, x1 - x2, y1 - y2, z1 - z2 );
                } else {
                    printf ( "Diferecnia: (%f, %f, %f) - (%f, %f, %f) = (%f, %f, %f)\n",
                            x2, y2, z2, x1, y1, z1, x2 - x1, y2 - y1, z2 - z1 );
                }
                break;
            case '5':
                do {
                    printf ( "1) Primer vector X segundo vector\n" );
                    printf ( "2) Segundo vector X primer vector\n" );
                    scanf ( "%s", &op );
                } while(!(op == '1' || op == '2'));
                if (op == '1') {
                    printf ( "Producto vectorial: (%f, %f, %f) X (%f, %f, %f) = (%f, %f, %f)\n",
                        x1, y1, z1, x2, y2, z2, y1 * z2 - z1 * y2, z1 * x2 - x1 * z2, x1 * y2 - y1 * x2);
                } else {
                    printf ( "Producto vectorial: (%f, %f, %f) X (%f, %f, %f) = (%f, %f, %f)\n",
                        x2, y2, z2, x1, y1, z1, y2 * z1 - z2 * y1, z2 * x1 - x2 * z1, x2 * y1 - y2 * x1);
                }
                break;
            case '6':
                printf ( "El producto escalar es: %f\n", x1 * x2 + y1 * y2 + z1 * z2 );
                break;
            case '7':
                r1 = x1 * x1 + y1 * y1 + z1 * z1;
                if (r1 < 0) {
                    printf ( "Error raiz de número negativo.\n" ); break;
                }
                r2 = x2 * x2 + y2 * y2 + z2 * z2;
                if (r2 < 0) {
                    printf ( "Error raiz de número negativo.\n" ); break;
                }
                rr = sqrt(r1) * sqrt(r2);
                if (rr == 0) {
                    printf ( "Error division por 0.\n" ); break;
                }
                printf ( "El ángulo entre ellos es: %f\n", 
                        (180 / M_PI) * acos((x1 * x2 + y1 * y2 + z1 * z2) / rr) );
                break;
            case '8':
                do {
                    printf ( "1) Longitud del primer vector\n" );
                    printf ( "2) Longitud del segundo vector\n" );
                    scanf ( "%s", &op );
                } while(!(op == '1' || op == '2'));
                if (op == '1') {
                    x = x1; y = y1; z = z1;
                } else {
                    x = x2; y = y2; z = z2;
                }
                rr = x * x + y * y + z * z;
                if (rr < 0) {
                    printf ( "Error raiz de número negativo.\n" );
                } else {
                    printf ( "Logitud de (%f, %f, %f) = %f\n", x, y, z, sqrt(rr) );
                }
                break;
            case '9':
                printf ( "Adios\n" ); break;
            default:
                printf ( "Opcion invalida.\n" );
        }
    } while(op != '9');
    return 0;
}

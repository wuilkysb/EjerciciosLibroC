/*
 * =============================================================================
 *
 *       Filename:  ej111.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/10/13 12:02:40
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

int main(void) {
    char a[MAXLON + 1], linea[MAXLON + 1];
    int n, i, longitud = 0;
    long numerob10 = 0, x = 1;
    do {
        printf ( "Dame la base (2 - 16): " );
        gets(linea); sscanf(linea, "%d", &n);
    } while(n < 2 || n > 16);
    printf ( "Dame un número en base %d: ", n ); gets(a);

    /* Verificar los digitos de la candea 'a' estan en el rango de la base 'n' */
    for (i = 0; a[i]; i++) {
        longitud++;
        if (!((a[i] >= '0' && a[i] < '0' + n && a[i] <= '9') || 
            (a[i] >= 'a' && a[i] < 'a' + (n / 10) * (n % 10)) || 
            (a[i] >= 'A' && a[i] < 'A' + (n / 10) * (n % 10)))) {
            printf ( "%c no es un dígito en base %d.\n", a[i], n );
            return 0;
        }
    }
    longitud--;

    /* Convertir cadena 'a' de base 'n' a base 10 */
    for (i = 0; a[i]; i++) {
        numerob10 += (a[longitud - i] <= '9') ? (a[longitud - i] - '0') * x : 
                     (a[longitud - i] <= 'F') ? (a[longitud - i] % 'A' + 10) * x
                     : (a[longitud - i] % 'a' + 10) * x;
        x *= n;
    }

    /* Mostrar resultado */
    printf ( "El valor %s en base %d es igual a %ld en base 10.\n", a, n,
            numerob10);
    return 0;
}

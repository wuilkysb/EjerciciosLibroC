#include <stdio.h>
#include <string.h>
#define MAXLON 80
#define CAD 20

int main(void){
    char nombre[CAD+1], apellido1[CAD+1], apellido2[CAD+1];
    char s[MAXLON+1];
    int i, lon_n, lon_a1, lon_a2;

    printf("Dame un nombre (max %d caracteres)  ", CAD); gets(nombre);
    printf("Dame el primer apellido (max %d caracteres)  ", CAD); gets(apellido1);
    printf("Dame el segundo apellido (max %d caracteres)  ", CAD); gets(apellido2);

    sprintf(s, "%s %s, %s", apellido1, apellido2, nombre);

    printf("%s", s);

    return 0;
}

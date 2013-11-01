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

    lon_n = strlen(nombre);
    lon_a1 = strlen(apellido1);
    lon_a2 = strlen(apellido2);

    for(i=0 ; nombre[i] != '\0' ; i++) s[i] = nombre[i];
    s[lon_n] = ' ';

    for(i = 0 ; apellido1[i] != '\0' ; i++) s[lon_n+i+1] = apellido1[i];
    s[lon_n+lon_a1+1] = ' ';

    for(i=0 ; apellido2[i] != '\0' ; i++) s[lon_n+lon_a1+i+2] = apellido2[i];
    s[lon_n+lon_a1+lon_a2+2] = '\0';

    printf("%s", s);

    return 0;
}

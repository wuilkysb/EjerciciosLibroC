#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXLON 80

int main(void){
 char a[MAXLON+1], b[MAXLON+1];
 int longitud, i, j, k;

 printf ("Introduce una cadena (max. %d cars.): ", MAXLON);
 gets(a);
 longitud = strlen(a);

 k = 0;
 for(i=0 ; i < longitud ; i++){
    if(!isspace(a[i])){
        k = i;
        break;
    }
 }

 j = 0;
 for (i=0; a[i] != '\0' ; i++)
    if (!isspace(a[i]) ||  ( i > k && isalnum(a[i+1]) && isspace(a[i])))
        b[j++] = a[i];
 b[j] = '\0';

 printf ("\nLa cadena normalizada es:%s:\n", b);

 return 0;
}

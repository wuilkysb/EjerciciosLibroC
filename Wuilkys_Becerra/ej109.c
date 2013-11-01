#include <stdio.h>
#include <string.h>
#define MAXLON 80


int main(void){
    char p[MAXLON+1], q[MAXLON+1];
    int i, k, cad;

     printf("Introduce una cadena:  "); gets(p);
     cad = strlen(p);

    k = 0;
    for(i=0 ; i < cad ; i++){
            if(p[i] != ' '){
                q[k] = p[i];
                k++;
            }
    }
    q[k] = '\0';

   printf(" %s \n", p);
   printf(" %s \n", q);


    return 0;
}

#include <stdio.h>

int bisiesto(int anyo){
    if (anyo % 4 == 0  && (anyo % 100 != 0  ||  anyo % 400 == 0))
       return 1;
    else
        return 0;
}

int main(void){
    int anno;
    printf("Dame un anyo : "); scanf("%d",&anno);
    if(bisiesto(anno) == 1) printf("Es Bisiesto");
    else printf("No es Bisiesto");

    return 0;
}

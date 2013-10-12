#include <stdio.h>

int main(void){
    int anyo;

    printf("Dame un a#o "); scanf("%d", &anyo);

    if(anyo % 4 == 0 && anyo%100 != 0 || anyo % 400 == 0)
        printf("\nEl a#o %d es Biciesto", anyo);
    else
        printf("\nEl a#o %d no es biciesto", anyo);

return 0;
}

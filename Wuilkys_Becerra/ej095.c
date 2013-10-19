#include <stdio.h>
#define TALLA 100
int main(void){
    int v[TALLA], i, p;
    i=0;
    p=1;
    do{
        if(p%2 != 0){
            v[i] = p;
            i++;
        }
        p++;
    }while(i < TALLA);

    for(i=0 ; i < TALLA ; i++) printf("%d ", v[i]);

    return 0;
}

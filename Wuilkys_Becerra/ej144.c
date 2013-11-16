#include <stdio.h>
#include <math.h>
#define MAXTALLA 1000

struct Punto{
    int x, y;
};

struct Lista{
    struct Punto representantes[MAXTALLA];
    int talla;
};

int main(void){
    struct Lista p;
    int i, x, y;
    float distancia;

    printf("Puntos a leer: "); scanf("%d", &p.talla);
    for(i=0 ; i < p.talla ; i++){
        printf("\nCoordenada x del punto %d  ", i); scanf("%d", &p.representantes[i].x);
        printf("Coordenada y del punto %d  ", i); scanf("%d", &p.representantes[i].y);
    }

    do{
        printf("\nCoordenada del punto x: "); scanf("%d", &x);
        printf("Coordenada del punto y: "); scanf("%d", &y);
        if(x != 0 || y != 0){
            distancia = 0;
            for(i=0 ; i < p.talla ; i++)
                distancia += sqrt (pow(x - p.representantes[i].x , 2) + pow(y - p.representantes[i].y , 2));

            printf("La distancia es : %.3f\n" , distancia);
        }
    }while( !(x==0 && y==0) );

    return 0;
}

#include <stdio.h>
#define FIL 4
#define COL 5

int main(void){
    float m[FIL][COL];
    float v[FIL];
    int i, j;

    for(i=0 ; i < COL ; i++){
        v[i] = 0;
    }

    for(i=0 ; i < FIL ; i++){
        for(j=0 ; j < COL ; j++){
            printf("Dame el valor de la posicion (%d,%d)  ", i,j);
            scanf("%f",&m[i][j]);
            v[i] += m[i][j];
        }
    }

    for(i=0 ; i < COL ; i++) printf("     %d",i);
    printf("\n");
    for(i=0 ; i < FIL ; i++){
        printf("%d[ ",i);
        for(j=0 ; j < COL ; j++){
            printf("%.3f",m[i][j]);
        }
        printf(" ]");
        printf(" -> %.3f\n", v[i]);
    }

    return 0;
}

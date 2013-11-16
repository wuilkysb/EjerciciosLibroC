#include <stdio.h>
#define TALLA_POLINOMIO 11

struct Polinomio{
    int grado;
    float polinomio[TALLA_POLINOMIO];
};

int main(void){
    struct Polinomio p, q , s;
    int i, bandera;

    do{
        printf("Grado de p (entre 0 y %d) ", TALLA_POLINOMIO-1);
        scanf("%d" , &p.grado);
    }while(p.grado < 0  || p.grado >= TALLA_POLINOMIO);
    for (i = 0; i<=p.grado; i++){
    printf ("p %d: ", i); scanf ("%f", &p.polinomio[i]);
    }
    for (i=p.grado+1; i<TALLA_POLINOMIO; i++)
        p.polinomio[i] = 0.0;

    do{
        printf ("Grado de q (entre 0 y %d): ", TALLA_POLINOMIO-1);
        scanf ("%d", &q.grado);
    } while (q.grado < 0 || q.grado >= TALLA_POLINOMIO);
    for (i = 0; i<=q.grado; i++){
        printf ("q %d: ", i); scanf ("%f", &q.polinomio[i]);
    }
    for (i=q.grado+1; i<TALLA_POLINOMIO; i++)
        q.polinomio[i] = 0.0;


 /* Calculo de la suma */
    for (i=0; i<TALLA_POLINOMIO; i++)
        s.polinomio[i] = p.polinomio[i] + q.polinomio[i];


    bandera = 0;
    printf ("Suma:  ");
    for (i=1; i<=TALLA_POLINOMIO; i++){
        if(s.polinomio[i-1] != 0.0){
            printf ("%f x^%d ", s.polinomio[i-1], i-1);
            bandera = 1;
        }
        if(s.polinomio[i] > 0 && i < TALLA_POLINOMIO)
            printf("+ ");
    }

    if(bandera == 0)
        printf("%f", s.polinomio[0]);


    printf("\n");

    return 0;
}

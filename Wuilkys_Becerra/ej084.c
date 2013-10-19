#include <stdio.h>
#define TALLA_POLINOMIO 11

int main(void){
 float p[TALLA_POLINOMIO], q[TALLA_POLINOMIO], s[TALLA_POLINOMIO];
 int grado;
 int i, bandera;

 /* Lectura de p */
 do{
    printf ("Grado de p (entre 0 y %d): ", TALLA_POLINOMIO-1); scanf ("%d", &grado);
 } while (grado < 0 || grado >= TALLA_POLINOMIO);
 for (i = 0; i<=grado; i++){
    printf ("p %d: ", i); scanf ("%f", &p[i]);
 }
 for (i=grado+1; i<TALLA_POLINOMIO; i++)
    p[i] = 0.0;

 /* Lectura de q */
 do{
    printf ("Grado de q (entre 0 y %d): ", TALLA_POLINOMIO-1); scanf ("%d", &grado);
 } while (grado < 0 || grado >= TALLA_POLINOMIO);
 for (i = 0; i<=grado; i++){
    printf ("q %d: ", i); scanf ("%f", &q[i]);
 }
 for (i=grado+1; i<TALLA_POLINOMIO; i++)
    q[i] = 0.0;


 /* Calculo de la suma */
 for (i=0; i<TALLA_POLINOMIO; i++)
    s[i] = p[i] + q[i];

 /* Presentacion del resultado */
 bandera = 0;
 printf ("Suma:  ");
 for (i=1; i<=TALLA_POLINOMIO; i++){
    if(s[i-1] != 0.0){
        printf ("%f x^%d ", s[i-1], i-1);
        bandera = 1;
    }
    if(s[i] > 0 && i < TALLA_POLINOMIO)
            printf("+ ");
 }

 if(bandera == 0)
    printf("%f", s[0]);


 printf("\n");

 return 0;
}

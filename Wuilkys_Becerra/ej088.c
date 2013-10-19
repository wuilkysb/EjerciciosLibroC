#include <stdio.h>
#define TALLA 168

int main(void){
    float t[TALLA];
    float maxi, mini, max_dia, min_dia, media;
    int i=0, j=24, dia=1, hora=0, num_dias;
    int reg_dia, reg_hora;
    /*llenando vector*/
    reg_dia = 0;   // variables a utilizar para el registro
    reg_hora = 0;  //del dia y la hora en la que
    maxi = 0;      //registro la mayor temperatura
    do{
        printf("Ingresa temperatura del dia: %d Hora: %d:00  ", dia, hora); scanf("%f", &t[i]);

        if(maxi < t[i]){
            reg_dia = dia;
            reg_hora = hora;
            maxi = t[i];
        }

        hora++;
        i++;
        if(j <= i){
            dia++;
            j += 24;
            hora = 0;
        }

    }while(i < TALLA);

    /*resultados del dia y hora con mayor temperatura*/
    printf("\nEl dia: %d  a la hora %d:00  se registro la mayor temperatura", reg_dia, reg_hora);


    /*maxima temperatura de la semana*/
    maxi = t[0];
    for(i=0 ; i < TALLA ; i++)
        if(t[i] > maxi)
            maxi = t[i];

    /*minima temperatura de la semana*/
    mini = t[0];
    for(i=0 ; i < TALLA ; i++)
        if(t[i] < mini)
            mini = t[i];

    printf("\n\nMaxima temperatura de la semana: %.3f gC", maxi);
    printf("\nMinima temperatura de la semana: %.3f gC \n", mini);

    /*maxima y minima temperatura por dia*/
    i = 0;
    j = 24;
    dia = 1;
    max_dia = t[0];
    min_dia = t[0];
    while(i < TALLA){
        for(hora = i; hora < j ; hora++)
            if(t[hora] > max_dia)
                max_dia = t[hora];

        for(hora = i; hora < j ; hora++)
            if(t[hora] < min_dia)
                min_dia = t[hora];

        printf("\nTemperatura maxima del dia %d  = %.3f gC", dia, max_dia);
        printf("\nTemperatura minima del dia %d  = %.3f gC", dia, min_dia);

        i = j;
        j +=24;
        dia++;
        max_dia = 0;
        min_dia = hora;
    }

    /*media de la semana*/
    media = 0;
    for(i=0 ; i < TALLA ; i++)
        media += t[i];

    media /= 2;
    printf("\n\nMedia de la semana: %.3f \n", media);

    /*media de cada dia*/
    media = 0;
    j = 24;
    hora = 0;
    dia = 1;
    i = 0;
    num_dias = 0;
    while(i < TALLA){
        for(i=hora; i < j ; i++)
            media += t[i];

        printf("\nMedia del dia %d es : %.3f", dia, media/2);

        if(media/2 > 30)
            num_dias++;

        media = 0;
        dia++;
        hora = j;
        i = hora;
        j += 24;
    }

    /*dias que la media superan los 30 gC*/
    if(num_dias > 0)
        printf("\nEl numero de dias en que la temperatura media supera los 30 gC es: %d", num_dias);

    return 0;
}

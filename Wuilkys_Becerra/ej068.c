#include <stdio.h>
#define tam 50

int main(void){
    int i, f=1, b=0;
    unsigned long long vec[tam];

    for(i=0 ; i < tam ; i++){
            vec[i] = 0;
    }
    i = 0;
    while(i < tam){
            if(i==0)
                vec[i] = 0;
            else{
                vec[i] = b + f;
                f = b;
                b = vec[i];
            }
        i++;
    }

    for(i = tam; i >= 0 ; i--) printf("%llu\n",vec[i]);

 return 0;
}

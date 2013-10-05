#include <stdio.h>

int main(void){
    int n = 1, i =1;
    while( n<6 ){
           while( i<6 ){
                  printf("%d\t",n*i);
                  i++;
           }
           printf("\n");
           n++;
    }
 getch();
 return(0);
}

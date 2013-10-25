#include <stdio.h>
#define MAXLON 80

int main(void){
    char s[MAXLON+1];
    int i;

     printf("Introduce una cadena:  "); gets(s);

    for(i=0 ; s[i] != '\0' ; i++){
        if('A' <= s[i] && s[i] <= 'Z'){
            if(s[i] == 'Z') s[i] = 'A';
            else s[i] += 1;
        }
        if('a' <= s[i] && s[i] <= 'z'){
            if(s[i] == 'z') s[i] = 'a';
            else s[i] += 1;
        }
    }

    printf("%s ", s);

    return 0;
}

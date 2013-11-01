#include <stdio.h>
#include <string.h>
#define MAXLON 80

int main(void){
    char s[MAXLON+1];
    int i;

    printf("Dame un vervo regular en primera conjucion  "); gets(s);

    printf("yo "); printf("%s\n", s);

    printf("tu "); for(i=1; s[i] != '\0' ; i++)  printf("%c", s[i-1]);
    printf("as\n");


    printf("el "); for(i=1; s[i] != '\0' ; i++)  printf("%c", s[i-1]);
    printf("a\n");


    printf("nosotros "); for(i=1; s[i] != '\0' ; i++)  printf("%c", s[i-1]);
    printf("amos\n");

    printf("vosotros "); for(i=1; s[i] != '\0' ; i++)  printf("%c", s[i-1]);
    printf("ais\n");

    printf("ellos "); for(i=1; s[i] != '\0' ; i++)  printf("%c", s[i-1]);
    printf("an");


    return 0;
}

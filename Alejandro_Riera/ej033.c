#include <stdio.h>

int main() {
    
    enum { Primera='a', Segunda, Tercera, Penultima= 'y', Ultima };
    printf("%c\n", Primera);
    printf("%c\n", Segunda);
    printf("%c\n", Tercera);
    printf("%c\n", Penultima);
    printf("%c\n", Ultima); 

return 0;
}

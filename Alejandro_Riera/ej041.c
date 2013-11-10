/*· 41 Diseña un programa C que lea un caracter cualquiera desde el teclado, y muestre el
mensaje Es una MAYUSCULA cuando el caracter sea una letra mayuscula y el mensaje ✭✭Es
una MINUSCULA.✮✮ cuando sea una minuscula. En cualquier otro caso, no mostrara mensaje */


#include <stdio.h>

int main() {
	char caracter;
	printf("Ingrese un caracter\n"); scanf("%c", &caracter);

	if ( caracter >= 'A' && caracter <= 'Z') {
		printf("Es una MAYUSCULA\n");
	}
	else if ( caracter >= 'a' && caracter <= 'z') {
		printf("Es una MINUSCULA\n");
	}
	else{printf("No es una letra\n");}

return 0;
}


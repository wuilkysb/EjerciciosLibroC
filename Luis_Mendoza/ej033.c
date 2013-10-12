#include <stdio.h>

int main (void)
{
	enum {primera = 'a', segunda, tercera, cuarta = 'y', quinta};
	
	printf("%c %c %c %c %c", primera, segunda, tercera, cuarta, quinta);
	
	getch();
	return 0;
}

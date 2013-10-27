#include <stdio.h>

int main(void)
{
	int n, i, j, sw;
	
	printf("Digite n: ");
	scanf("%d", &n);
	printf("Listado de primos:\n");
	for(i=2; i<=n; i++){
		sw=1;
		for(j=2; j<i/2; j++){
			if(i%j==0){
				sw=0;
				break;
			}
		}
		if (sw)
			printf("%d\n", i);
	}
	
	return 0;
}

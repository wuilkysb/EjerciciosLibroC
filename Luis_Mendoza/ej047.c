#include <stdio.h>
#include <math.h>

int main (void)
{
	int n, cn, sw=1, result=0, i=0;
	
	printf("Digite numero binario: ");
	scanf("%d", &n);
	cn = n;
	
	while (cn > 9) {
		if(cn%10 !=0 && cn%10 !=1){
			sw = 0;
			break;
		}else
			result += (cn%10) * pow(2, i);
		
		cn = cn/10;
		i++;
	}
	if (sw!=0)
		if(cn!=0 && cn!=1)
			sw=0;
		else
			result += cn * pow(2, i);
		
	if (sw)
		printf("%d (2) = %d (10)", n, result);
	else
		printf("No se puede proporcionar el valor la interpretacion como numero binario.");
		
	getch();
	return 0;
}

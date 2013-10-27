#include <stdio.h>
#define TALLA 100

int main(void)
{
	int v[TALLA], i;
	
	for (i=0; i<TALLA; i++)
		if(v[i]%2==0)
			v[i]=0;
		else
			v[i]=1;
	
	return 0;
}




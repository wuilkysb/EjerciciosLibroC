#include <stdio.h>

#define MAXENF 10
#define MAXSIN 10

int main(void)
{
	char enfermedades[MAXENF][20] = {"gripe", "indigestión", "jaquecas", "paperas", 
		"tuberculosis", "alergia", "sarampión", "rubeola", "dermatitis", 
		"conjuntivitis"};
	char sintomas[MAXSIN][20] = {"fiebre", "tos", "picazón", "dolor de cabeza", 
		"dolor de barriga", "mareos", "rinitis", "sarpullido", "sangrado",
		"manchas"};
	char sintomatologia[MAXENF][MAXSIN] = {{1, 1, 0, 1, 0, 0, 1, 0, 0, 0},
								   		   {0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
								   		   {0, 0, 0, 1, 0, 1, 0, 0, 0, 0},
								   		   {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
								   		   {1, 1, 0, 0, 0, 0, 0, 0, 1, 0},
								   		   {0, 0, 1, 0, 0, 0, 1, 1, 0, 1},
								   		   {0, 0 ,1, 0, 0, 0, 0, 1, 0, 0},
								   		   {1, 0, 1, 0, 0, 0, 0, 1, 0, 0},
								   		   {0, 0, 1, 0, 0, 0, 0, 0, 0, 1},
								   		   {0, 0, 1, 0, 0, 0, 0, 0, 0, 0}};
	char paciente[MAXSIN], entrada[2];
	int i, j, cont, flag;

	printf("\nIntroduzca los síntomas (SÍ=1, NO=0)\n");
	printf("\n");

	for (i=0; i<MAXSIN; i++) {
		printf("%s?: ", sintomas[i]); 
		gets(entrada); sscanf(entrada, "%hhu", &paciente[i]);
	}

	flag = 0;
	for (i=0; i<MAXENF; i++) {
		cont = 0;
		for (j=0; j<MAXSIN; j++)
			if (paciente[j] == sintomatologia[i][j]) cont++;
		if (cont == MAXSIN) {
			printf("\nDiagnóstico: %s\n", enfermedades[i]);
			flag = 1;
		}
	}
	if (flag == 0)
		printf("\nLos síntomas no se corresponden con ninguna patología"
			"presente en nuestra base de datos.\n");
	printf("\n");
	
	return 0;
}
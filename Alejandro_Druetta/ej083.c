#include <stdio.h>

#define TALLA_POLINOMIO 11

int main(void)
{
	float p[TALLA_POLINOMIO], q[TALLA_POLINOMIO], s[TALLA_POLINOMIO];
	int grado, i, cero=1, signo=0;

	/* Lectura de p */
	do {
		printf ("Grado de p (entre 0 y %d): ", TALLA_POLINOMIO-1); 
		scanf ("%d", &grado);
	} while (grado < 0 || grado >= TALLA_POLINOMIO);
	for (i = 0; i<=grado; i++) {
		printf ("p %d: ", i); scanf ("%f", &p[i]);
	}
	for (i=grado+1; i<TALLA_POLINOMIO; i++)
		p[i] = 0.0;

	/* Lectura de q */
	do {
		printf ("Grado de q (entre 0 y %d): ", TALLA_POLINOMIO-1); 
		scanf ("%d", &grado);
	} while (grado < 0 || grado >= TALLA_POLINOMIO);
	for (i = 0; i<=grado; i++) {
		printf ("q %d: ", i); scanf ("%f", &q[i]);
	}
	for (i=grado+1; i<TALLA_POLINOMIO; i++)
		q[i] = 0.0;

	/* Cálculo de la suma */
	for (i=0; i<TALLA_POLINOMIO; i++)
		s[i] = p[i] + q[i];

	/* Presentación del resultado */
	if (s[0] != 0) {
		printf ("Suma: %f ", s[0]);
		signo = 1;
		cero = 0;
	}
	for (i=1; i<TALLA_POLINOMIO; i++) {
		if (s[i] != 0) {
			if (signo)
				printf ("+ %f x^%d ", s[i], i);
			else
				printf ("%f x^%d ", s[i], i);
			cero = 0;
		}
		signo = 1;
	}
	if (cero) printf ("Suma: %f", .0);
	printf ("\n");

	return 0;
}

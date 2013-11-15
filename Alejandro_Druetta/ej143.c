#include <stdio.h>
#include <math.h>

#define TALLA_POLINOMIO 11

struct Polinomio {
	int grado;
	float coeficiente[TALLA_POLINOMIO];
};

int main(void)
{
	struct Polinomio p, q, s;
	int i, cero=1, signo=0;

	/* Lectura de p */
	do {
		printf ("Grado de p (entre 0 y %d): ", TALLA_POLINOMIO-1); 
		scanf ("%d", &p.grado);
	} while (p.grado < 0 || p.grado >= TALLA_POLINOMIO);

	for (i = 0; i<=p.grado; i++) {
		printf ("p %d: ", i); scanf ("%f", &p.coeficiente[i]);
	}
	for (i=p.grado+1; i<TALLA_POLINOMIO; i++)
		p.coeficiente[i] = 0.0;

	/* Lectura de q */
	do {
		printf ("Grado de q (entre 0 y %d): ", TALLA_POLINOMIO-1); 
		scanf ("%d", &q.grado);
	} while (q.grado < 0 || q.grado >= TALLA_POLINOMIO);
	for (i = 0; i<=q.grado; i++) {
		printf ("q %d: ", i); scanf ("%f", &q.coeficiente[i]);
	}
	for (i=q.grado+1; i<TALLA_POLINOMIO; i++)
		q.coeficiente[i] = 0.0;

	/* Cálculo de la suma */
	for (i=0; i<TALLA_POLINOMIO; i++)
		s.coeficiente[i] = p.coeficiente[i] + q.coeficiente[i];

	/* Presentación del resultado */
	if (s.coeficiente[0] != 0) {
		printf ("Suma: %f ", s.coeficiente[0]);
		signo = 1;
		cero = 0;
	}
	for (i=1; i<TALLA_POLINOMIO; i++) {
		if (s.coeficiente[i] > 0) {
			if (signo)
				printf ("+ %f x^%d ", s.coeficiente[i], i);
			else
				printf ("%f x^%d ", s.coeficiente[i], i);
			cero = 0;
		}
		else if (s.coeficiente[i] < 0) {
			if (signo)
				printf ("- %f x^%d ", fabs(s.coeficiente[i]), i);
			else
				printf ("%f x^%d ", s.coeficiente[i], i);
			cero = 0;
		}
		signo = 1;
	}
	if (cero) printf ("Suma: %f", .0);
	printf ("\n");

	return 0;
}

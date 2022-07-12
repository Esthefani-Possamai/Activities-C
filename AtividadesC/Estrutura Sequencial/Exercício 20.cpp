#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float A, B, NOVOA, NOVOB;
	printf ("Ol�! Informe o valor de A: ");
	scanf ("%f", &A);
	printf ("Informe o valor de B: ");
	scanf ("%f", &B);
	NOVOA = B;
	NOVOB = A;
	printf ("Certo! ap�s as trocas efetuadas, o valor de A � %4.1f e o valor de B � %4.1f!", NOVOA, NOVOB);
}

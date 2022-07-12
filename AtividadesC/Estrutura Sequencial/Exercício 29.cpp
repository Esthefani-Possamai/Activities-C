#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float N1, N2, N3, MED;
	int P1, P2, P3;
	printf ("Ol�, estudante! Informe sua primeira nota: ");
	scanf ("%f", &N1);
	printf ("Qual o peso da nota %.2f? ", N1);
	scanf ("%d", &P1);
	printf ("Informe sua segunda nota: ");
	scanf ("%f", &N2);
	printf ("Qual o peso da nota %.2f? ", N2);
	scanf ("%d", &P2);
	printf ("Informe sua terceira nota: ");
	scanf ("%f", &N3);
	printf ("Qual o peso da nota %.2f? ", N3);
	scanf ("%d", &P3);
	MED = ((N1 * P1) + (N2 * P2) + (N3 * P3)) / (P1+P2+P3);
	printf ("Estudante, a sua m�dia foi de %.2f pontos!", MED);
}

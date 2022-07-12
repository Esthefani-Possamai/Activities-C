#include <stdio.h>
#include <locale.h>
main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float D1, D2, AREA, POT;
	printf ("Ol�! Informe a medida da primeira dimens�o do c�modo (m): ");
	scanf ("%f", &D1);
	printf ("Informe a medida da segunda dimens�o do c�modo (m): ");
	scanf ("%f", &D2);
	AREA = D1 * D2;
	POT = AREA * 18;
	printf ("Sabendo que a �rea do c�modo � de %4.2f metros quadrados, a pot�ncia de ilumina��o necess�ria ser� de %4.2f W.", AREA, POT);
}

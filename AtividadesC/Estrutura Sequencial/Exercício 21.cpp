#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float N1, N2, SOMA, SUB, MULT;
	printf ("Ol�! Por favor, informe o primeiro n�mero: ");
	scanf ("%f", &N1);
	printf ("Informe o segundo n�mero: ");
	scanf ("%f", &N2);
	SOMA = N1 + N2;
	SUB = N1 - N2;
	MULT = N1 * N2;
	printf ("Primeiro n�mero: %4.2f      Segundo n�mero: %4.2f \nSoma: %4.2f \nSubtra��o: %4.2f \nMultiplica��o: %4.2f", N1, N2, SOMA, SUB, MULT);
}

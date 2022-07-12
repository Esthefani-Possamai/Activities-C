#include <stdio.h>
main()
{
	float N1, N2, N3, MULTIPLICACAO;
	printf ("Informe o primeiro numero: ");
	scanf ("%f", &N1);
	printf ("Informe o segundo numero: ");
	scanf ("%f", &N2);
	printf ("Informe o terceiro numero: ");
	scanf ("%f", &N3);
	MULTIPLICACAO = N1 * N2 * N3;
	printf ("O produto da multiplicacao de %4.2f x %4.2f x %4.2f e de %4.2f!", N1, N2, N3, MULTIPLICACAO);
}

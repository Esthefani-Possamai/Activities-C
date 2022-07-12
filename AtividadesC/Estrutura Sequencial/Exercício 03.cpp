#include <stdio.h>
main()
{
	float N1, N2, DIVISAO;
	printf ("Informe o primeiro numero: ");
	scanf ("%f", &N1);
	printf ("Informe o segundo numero: ");
	scanf ("%f", &N2);
	DIVISAO = N1 / N2;
	printf ("O resultado da divisao de %4.2f por %4.2f e %4.2f!", N1, N2, DIVISAO);
}

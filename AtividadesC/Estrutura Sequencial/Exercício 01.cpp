#include <stdio.h>
#include <locale.h>
main ()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float N1, N2, SUBTRACAO;
	printf ("Informe o primeiro número: ");
	scanf ("%f", &N1);
	printf ("Informe o segundo número: ");
	scanf ("%f", &N2);
	SUBTRACAO = N1 - N2;
	printf ("A difereçca de %4.2f por %4.2f é de %4.2f!", N1, N2, SUBTRACAO);
}

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int N1, N2, SOMA;
	
	printf ("Informe um n�mero inteiro: ");
	scanf ("%d", &N1);
	printf ("Informe um outro n�mero inteiro: ");
	scanf ("%d", &N2);
	SOMA = N1 + N2;
	
	if (SOMA > 10)
	{ 
	printf ("O valor da adi��o dos dois n�meros informados � de %.1d.", SOMA);
	}
}

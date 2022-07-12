#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float NUMERO, METADE;
	
	printf ("Informe um número: ");
	scanf ("%f", &NUMERO);
	
	if (NUMERO > 20)
	{
		METADE = NUMERO /2;
		printf ("A metade do número informado é %.1f", METADE);
	}	
	else
	{
		printf ("O número informado é menor que 20!");
	}
}

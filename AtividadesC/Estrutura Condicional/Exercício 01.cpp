#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	float NUMERO, METADE;
	
	printf ("Informe um n�mero: ");
	scanf ("%f", &NUMERO);
	
	if (NUMERO > 20)
	{
		METADE = NUMERO /2;
		printf ("A metade do n�mero informado � %.2f", METADE);
	}	
	else
	{
		printf ("O n�mero informado � menor que 20!");
	}
}

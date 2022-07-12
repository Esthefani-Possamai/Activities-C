#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int NUM;
	
	printf ("\nInforme um número: ");
	scanf ("%d", &NUM);
	
	while (NUM != -999)
	{
		printf ("O triplo do número informado é igual a %d.\n", NUM*3);
		printf ("\nInforme um número: ");
		scanf ("%d", &NUM);
	}
}

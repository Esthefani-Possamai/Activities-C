#include <stdio.h>
#include <locale.h>

main()
{
	setlocale (LC_ALL, "Portuguese_Brazil");
	int NUM;
	
	printf ("\nInforme um n�mero: ");
	scanf ("%d", &NUM);
	
	while (NUM != -999)
	{
		printf ("O triplo do n�mero informado � igual a %d.\n", NUM*3);
		printf ("\nInforme um n�mero: ");
		scanf ("%d", &NUM);
	}
}
